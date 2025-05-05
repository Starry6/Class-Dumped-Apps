@interface BDARVADModelWrapper : NSObject
@property (nonatomic) BDARVADModel adModel;
@property (nonatomic) double savaTimestamp;
@property (nonatomic) q expiredTimestamp;
- (id)adModel;
- (long long)expiredTimestamp;
- (double)savaTimestamp;
- (void)setAdModel:;
- (void)setExpiredTimestamp:;
- (void)setSavaTimestamp:;
- (BOOL)isExpired;
- (void).cxx_destruct;
+ (id)modelWrapperWithAD:enableExpire:;
@end
