@interface AWEConcernItemCacheModel : NSObject
@property (nonatomic) double expireTime;
@property (nonatomic) NSString cachedAwemeID;
- (void)resetWithAwemeID:expireTime:;
- (BOOL)removeAwemeID:;
- (id)cachedAwemeID;
- (void)setCachedAwemeID:;
- (BOOL)isExpired;
- (id)init;
- (void)encodeWithCoder:;
- (void)clear;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (double)expireTime;
- (void)setExpireTime:;
@end
