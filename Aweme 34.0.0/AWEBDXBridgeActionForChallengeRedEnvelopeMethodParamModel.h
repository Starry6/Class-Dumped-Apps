@interface AWEBDXBridgeActionForChallengeRedEnvelopeMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString awemeID;
@property (nonatomic) BOOL hasShowPanel;
@property (nonatomic) NSString scene;
@property (nonatomic) q actionType;
- (void)setAwemeID:;
- (id)awemeID;
- (BOOL)hasShowPanel;
- (void)setHasShowPanel:;
- (long long)actionType;
- (void)setActionType:;
- (void)setScene:;
- (id)scene;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
