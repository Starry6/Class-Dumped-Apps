@interface AWEIMSharePoiContentComponent : AWEIMFlexComponent
@property (nonatomic) IESIMDisableCardPresenter disablePresenter;
@property (nonatomic) AWEIMSmallCardPresenter cardPresenter;
@property (nonatomic) q scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenter;
- (void)p_createCardPresenter;
- (void)p_createDisablePresenter;
- (id)disablePresenter;
- (void)setDisablePresenter:;
- (id)cardPresenter;
- (void)setCardPresenter:;
- (void)p_updateCardUnavailable;
- (id)p_messageSubtitle;
- (void)p_cardTapped;
- (id)displayMessage;
- (void)setScene:;
- (id)message;
- (long long)scene;
- (void).cxx_destruct;
@end
