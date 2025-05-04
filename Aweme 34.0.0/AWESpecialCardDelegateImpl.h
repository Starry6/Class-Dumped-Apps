@interface AWESpecialCardDelegateImpl : NSObject
@property (nonatomic) <AWESpecialCardDelegateCallProtocol> dispatchController;
@property (nonatomic) <AWESpecialCardControllerProtocol> cardController;
@property (nonatomic) AWESpecialCardProxy cardProxy;
@property (nonatomic) NSString businessID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)requestCardWithExtraParams:completion:;
- (void)insertCardWithModel:index:completion:;
- (BOOL)deleteCardWithModel:animated:;
- (void)insertCard:after:tolerance:extraParams:completion:;
- (void)trackFeedCardActionButtonClickedWithModel:enterMethod:extraDict:;
- (void)trackFeedCardDislikeButtonClickedWithModel:enterMethod:extraDict:;
- (void)cardActionButtonClicked:;
- (id)cardProxy;
- (id)dispatchController;
- (void)preCreateLynxCardWithModel:completion:;
- (void)removePreCreateLynxCardWithModel:;
- (BOOL)containsPreCreateLynxCardWithModel:;
- (void)setDispatchController:;
- (void)setCardProxy:;
- (void)setCardController:;
- (id)cardController;
- (id)businessID;
- (void)setBusinessID:;
- (void).cxx_destruct;
@end
