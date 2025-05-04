@interface AWEPlayInteractionBottomButtonSendCollectViewModel : NSObject
@property (nonatomic) AWECommonButtonInfoModel infoModel;
@property (nonatomic) AWEPlayInteractionContext context;
@property (nonatomic) <AWEPlayInteractionBottomButtonComponentProtocol> component;
- (id)trackParams;
- (long long)activateType;
- (id)initWithInfoModel:context:component:;
- (void)didClickView:atPosition:withModel:;
- (id)infoModel;
- (void)setInfoModel:;
- (id)aAWEFeedModuleServiceDOUYINLiteAdaper;
- (void)handleSendGoldCompletionWithModel:error:fromPanel:;
- (void)openSendGoldCollectPanel;
- (BOOL)shouldShowSendPanel;
- (id)component;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (void)setComponent:;
+ (BOOL)shouldShowButtonForModel:context:;
+ (Class)aAWEFeedModuleServiceDOUYINLiteAdaperClass;
@end
