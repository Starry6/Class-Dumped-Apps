@interface AWEFeedCacheValidPeriodInspector : NSObject
@property (nonatomic) q expireTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkDataIsQualifiedWithObject:;
- (id)initWithExpireTime:;
- (long long)expireTime;
- (void)setExpireTime:;
@end
