@interface AWEDLMAuthResult : NSObject
@property (nonatomic) q action;
@property (nonatomic) NSString certID;
@property (nonatomic) NSString positionCertID;
@property (nonatomic) NSString ruleID;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setExtraParams:;
- (id)extraParams;
- (id)certID;
- (void)setCertID:;
- (id)positionCertID;
- (void)setPositionCertID:;
- (void)setRuleID:;
- (void)setAction:;
- (long long)action;
- (void).cxx_destruct;
- (id)ruleID;
@end
