@interface IESECGoodsAuthResponse : IESECBaseApiModel
@property (nonatomic) q result;
@property (nonatomic) NSNumber userID;
@property (nonatomic) BOOL success;
- (long long)result;
- (id)userID;
- (BOOL)success;
- (void).cxx_destruct;
- (void)setUserID:;
- (void)setResult:;
+ (id)JSONKeyPathsByPropertyKey;
@end
