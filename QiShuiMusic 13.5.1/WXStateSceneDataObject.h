@interface WXStateSceneDataObject : WXSceneDataObject
@property (nonatomic) NSString stateId;
@property (nonatomic) NSString stateTitle;
@property (nonatomic) NSString token;
@property (nonatomic) WXStateJumpInfo stateJumpDataInfo;
- (void)setStateId:;
- (void)setStateJumpDataInfo:;
- (void)setStateTitle:;
- (id)stateJumpDataInfo;
- (id)stateTitle;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)stateId;
+ (id)object;
@end
