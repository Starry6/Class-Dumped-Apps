@interface AWEEnterpriseCenterUserProfileEntryControllerV2 : NSObject
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) BOOL isTrackedShown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (void)cardWillAppear;
- (void)setCommonParamModel:;
- (id)commonParamModel;
- (BOOL)isTrackedShown;
- (void)setIsTrackedShown:;
- (void)p_trackEnterpriseProfileButtonWithEventName:;
- (void)p_handleProfileExtensionAreaAction;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
+ (id)cardControllerWithCommonParam:;
@end
