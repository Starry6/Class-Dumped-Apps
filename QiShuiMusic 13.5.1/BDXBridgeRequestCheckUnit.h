@interface BDXBridgeRequestCheckUnit : NSObject
@property (nonatomic) NSDictionary settingsConfig;
@property (nonatomic) NSMutableDictionary needMatches;
@property (nonatomic) NSMutableDictionary needExculdes;
@property (nonatomic) Q action;
- (void)setNeedMatches:;
- (id)extractRegExpressionMatch:withRule:;
- (id)needExculdes;
- (id)needMatches;
- (void)setNeedExculdes:;
- (void)setSettingsConfig:;
- (id)settingsConfig;
- (id)init;
- (id)initWithDictionary:;
- (unsigned long long)action;
- (void).cxx_destruct;
@end
