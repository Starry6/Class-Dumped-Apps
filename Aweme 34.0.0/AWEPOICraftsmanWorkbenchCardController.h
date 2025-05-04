@interface AWEPOICraftsmanWorkbenchCardController : NSObject
@property (nonatomic) UIView<AWEProfileExtensionAreaCardViewProtocol> cardView;
@property (nonatomic) AWEProfileExtensionAreaCommonParamModel commonParamModel;
@property (nonatomic) <AWEProfileExtensionAreaContainerProtocol> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowCard;
- (void)passCardView:;
- (void)cardDidClicked;
- (void)configDelegate:;
- (void)setCommonParamModel:;
- (id)commonParamModel;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)cardView;
- (void)setCardView:;
+ (id)cardControllerWithCommonParam:;
@end
