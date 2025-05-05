@interface IESECShopCacheModel : NSObject
@property (nonatomic) double updateTime;
@property (nonatomic) double expireInterval;
@property (nonatomic) NSData data;
- (double)expireInterval;
- (void)setExpireInterval:;
- (BOOL)hasExpired;
- (id)data;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setData:;
- (double)updateTime;
- (id)copyWithZone:;
- (void)setUpdateTime:;
@end
