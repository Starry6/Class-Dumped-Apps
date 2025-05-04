@interface AWEHPBaseComponentModel : MTLModel
@property (nonatomic) NSArray dynamicStrategies;
@property (nonatomic) NSString componentID;
@property (nonatomic) NSMutableArray tabIDStack;
@property (nonatomic) NSDictionary bizTrackParams;
@property (nonatomic) @? bizTrackParamsBlock;
- (id)dynamicStrategies;
- (id)tabIDStack;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (id)bizTrackParamsBlock;
- (void)setBizTrackParamsBlock:;
- (void)setTabIDStack:;
- (void)setDynamicStrategies:;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setComponentID:;
- (id)componentID;
+ (id)JSONKeyPathsByPropertyKey;
@end
