@interface AWELiveVIPUserProfileExtensionCardController : NSObject
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (id)trackerExtraParamsWithEventName:;
- (void)setCommonParamModel:;
- (id)commonParamModel;
- (BOOL)shouldShowRedDot;
- (BOOL)isHostProfile;
- (id)getMessageNotificationMsgSecDictFor:;
- (id)cutVIPMessageNotificationMsgSecDictIfNeed:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
+ (id)cardControllerWithCommonParam:;
@end
