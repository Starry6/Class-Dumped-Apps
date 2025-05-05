@interface SSItemMedia : NSObject
@property (nonatomic) q fullDurationInMilliseconds;
@property (nonatomic) q mediaFileSize;
@property (nonatomic) NSString mediaKind;
@property (nonatomic) q durationInMilliseconds;
@property (nonatomic) BOOL protectedMedia;
@property (nonatomic) NSURL URL;
- (id)init;
- (void)dealloc;
- (id)mediaKind;
- (unsigned long long)hash;
- (void)setMediaKind:;
- (id)description;
- (BOOL)isEqual:;
- (id)URL;
- (long long)durationInMilliseconds;
- (id)initWithStoreOfferDictionary:;
- (long long)fullDurationInMilliseconds;
- (long long)mediaFileSize;
- (BOOL)isProtectedMedia;
@end
