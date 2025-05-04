@interface AWEClientAIAwemeVideoSizeCache : NSObject
@property (nonatomic) q cachedSize;
@property (nonatomic) q expiredTime;
- (long long)expiredTime;
- (void)setExpiredTime:;
- (id)initWithCachedSize:;
- (void)setCachedSize:;
- (BOOL)isValid;
- (long long)cachedSize;
@end
