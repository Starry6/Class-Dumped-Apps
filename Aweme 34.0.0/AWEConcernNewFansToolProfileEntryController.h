@interface AWEConcernNewFansToolProfileEntryController : NSObject
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isShown;
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
- (void).cxx_destruct;
- (BOOL)isShown;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:;
- (id)cardView;
- (void)setCardView:;
- (void)setIsShown:;
+ (id)cardControllerWithCommonParam:;
@end
