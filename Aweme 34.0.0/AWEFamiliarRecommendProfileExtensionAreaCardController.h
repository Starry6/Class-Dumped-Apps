@interface AWEFamiliarRecommendProfileExtensionAreaCardController : NSObject
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (BOOL)isForcedToShowAfterHomePageRefresh;
- (BOOL)needToShowPopover;
- (void)configPopoverConfigModel:;
- (void)setCommonParamModel:;
- (id)commonParamModel;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
+ (id)cardControllerWithCommonParam:;
@end
