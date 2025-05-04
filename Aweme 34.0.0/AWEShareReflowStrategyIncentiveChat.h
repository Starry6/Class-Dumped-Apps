@interface AWEShareReflowStrategyIncentiveChat : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithModel:longURL:;
- (BOOL)shouldAvoidSamePageWithModel:;
- (BOOL)enableTransferDirectly;
- (BOOL)shouldDelayTokenFind;
- (void)transferWithModel:params:longURL:tokenFromType:;
- (void)configReflowCardWithModel:tokenFromType:trackParams:reportParams:turnToShareBlock:reshowCardViewBlock:completion:;
- (void)configWithSchemaParams:completion:;
- (id)configPrivateChatReflowViewWithModel:inviterDevicePlatform:secActivityInfo:task:;
- (id)configGroupChatReflowViewWithModel:convShortID:;
- (id)currentPageReferString;
- (id)p_getPrivateReflowMainTitleWithModel:;
- (id)p_getPrivateReflowSubTitleWithModel:;
- (id)p_getPrivateReflowConfirmButtonTextWithModel:;
- (id)descriptionText;
- (id)tokenType;
+ (id)getSettingAWEIncentiveChatReflowViewConfigModel;
+ (void)handleRouterTransferWithParams:;
@end
