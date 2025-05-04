@interface AWEIMXBridgeImPresentGroupPanelMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString groupChatPanelType;
@property (nonatomic) NSString createSource;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) NSDictionary bizExtension;
- (void)setTrackDict:;
- (id)trackDict;
- (id)bizExtension;
- (void)setBizExtension:;
- (id)groupChatPanelType;
- (id)createSource;
- (void)setCreateSource:;
- (void)setGroupChatPanelType:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)defaultValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
