@interface LASecureData : NSObject
- (id)initWithBytes:length:;
- (id)init;
- (void)dealloc;
- (void)appendData:;
- (id)data;
- (id)initWithString:;
- (void)appendBytes:length:;
- (void)appendString:;
- (id)bytes;
- (id)initWithData:;
- (void)reset;
- (unsigned long long)length;
- (BOOL)isEqual:;
- (void)prepareBuffer:;
- (void)resize:;
- (BOOL)removeLastCharacter;
+ (id)secureDataWithBytes:length:;
+ (id)secureDataWithString:;
+ (id)secureDataWithData:;
+ (void)resetBytes:length:;
@end
