@interface AWEShareReflowStrategyFeedShare : NSObject
@property (nonatomic) AWEShareTokenHandlerResponseModel model;
@property (nonatomic) NSString longURLString;
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
- (BOOL)__supportReflow;
- (id)longURLString;
- (id)model;
- (id)descriptionText;
- (void).cxx_destruct;
- (id)tokenType;
@end
