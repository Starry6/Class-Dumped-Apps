@interface AWEOpenAuthInfoRiskDataV4 : MTLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString riskTypeStr;
@property (nonatomic) NSString riskAddress;
@property (nonatomic) NSString riskPhone;
- (id)riskTypeStr;
- (void)setRiskTypeStr:;
- (id)riskAddress;
- (void)setRiskAddress:;
- (id)riskPhone;
- (void)setRiskPhone:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
