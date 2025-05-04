@interface AWEPostPageCompanyCouponHandler : NSObject
@property (nonatomic) BOOL hasLocalLifeAnchor;
@property (nonatomic) NSString companyCouponJsonData;
@property (nonatomic) <AWEPostPageContext> context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindServices:;
- (void)trackRemindViewIfNeededWithEventState:scene:;
- (void)trackPOITradeAnchorShowWithParams:;
- (BOOL)companyCouponElementVisible:anchor:anchorContext:isLocalLifeMatchMissionFromTask:;
- (BOOL)hasLocalLifeAnchor;
- (id)companyCouponJsonData;
- (void)setCompanyCouponJsonData:;
- (BOOL)enableGameAndCompanyCouponLogicOp;
- (BOOL)enableAnchorsCheckLogicOp;
- (void).cxx_destruct;
- (id)context;
+ (void)_aweLazyRegisterPostPage;
@end
