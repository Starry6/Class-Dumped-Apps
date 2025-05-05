@interface FAFamilyCircleCacheResponse : NSObject
@property (nonatomic) FAFamilyCircle familyCircle;
@property (nonatomic) NSDate cacheDate;
@property (nonatomic) NSString serverTag;
@property (nonatomic) double maxAge;
@property (nonatomic) NSDate expiration;
- (id)familyCircleIfFresh;
- (double)maxAge;
- (id)familyCircleValidatingAgeWithDate:;
- (BOOL)_isFamilyCircleFresh:;
- (id)cacheDate;
- (void)setFamilyCircle:;
- (id)familyCircle;
- (void)setMaxAge:;
- (void)setServerTag:;
- (void).cxx_destruct;
- (id)serverTag;
- (void)setCacheDate:;
- (BOOL)isFamilyCircleFresh;
- (id)expiration;
- (id)initWithFamilyCircle:serverTag:cacheDate:maxAge:;
@end
