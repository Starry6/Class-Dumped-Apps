@interface IESECLiveRedpackActivityResponse : IESECLiveApiBaseModel
@property (nonatomic) NSDictionary redpack;
@property (nonatomic) BOOL overlap;
@property (nonatomic) q expireDuration;
@property (nonatomic) NSNumber serverTime;
- (id)redpack;
- (long long)expireDuration;
- (void)setExpireDuration:;
- (void)setRedpack:;
- (void)setServerTime:;
- (void).cxx_destruct;
- (id)serverTime;
- (BOOL)overlap;
- (void)setOverlap:;
+ (id)JSONKeyPathsByPropertyKey;
@end
