@interface AWEIMXBridgeImPresentJoinGroupPanelMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString groupChatPanelType;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) NSDictionary bizExtension;
- (void)setTrackDict:;
- (id)trackDict;
- (id)bizExtension;
- (void)setBizExtension:;
- (id)groupChatPanelType;
- (void)setGroupChatPanelType:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
