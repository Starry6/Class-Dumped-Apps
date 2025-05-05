@interface MBDigest : NSObject
- (void)updateWithString:;
- (void)updateWithData:;
- (void)updateWithBytes:length:;
- (id)final;
- (void)updateWithDate:;
- (id)digestForData:;
- (id)digestForFileAtPath:error:;
- (id)digestForString:;
- (void)updateWithInt32:;
- (void)updateWithInt64:;
- (BOOL)updateWithFile:error:;
- (void)finalWithBytes:length:;
+ (id)sha1ForString:;
+ (id)sha256;
+ (id)sha1ForData:;
+ (id)sha1;
+ (id)sha1ForFileAtPath:error:;
+ (id)sha1HmacForString:key:;
+ (long long)simpleChecksumForString:;
@end
