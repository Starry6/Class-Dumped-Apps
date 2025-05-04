@interface AWEAdCardStatusParamModel : BDXBridgeModel
@property (nonatomic) q status;
@property (nonatomic) q from;
@property (nonatomic) NSString formType;
@property (nonatomic) BOOL disableCloseBtn;
@property (nonatomic) BOOL enableCardClick;
- (BOOL)disableCloseBtn;
- (BOOL)enableCardClick;
- (void)setEnableCardClick:;
- (void)setDisableCloseBtn:;
- (void)setStatus:;
- (void).cxx_destruct;
- (long long)status;
- (id)formType;
- (void)setFormType:;
- (void)setFrom:;
- (long long)from;
+ (id)JSONKeyPathsByPropertyKey;
@end
