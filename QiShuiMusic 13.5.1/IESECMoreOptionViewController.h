@interface IESECMoreOptionViewController : UIViewController
@property (nonatomic) Q style;
@property (nonatomic) BOOL shouldShowOwnerClaim;
@property (nonatomic) BOOL shouldShowOwnerBackstage;
@property (nonatomic) IESECMoreOptionView moreOptionView;
@property (nonatomic) NSArray items;
- (id)moreOptionView;
- (void)p_setupViews;
- (void)setMoreOptionView:;
- (void)setShouldShowOwnerBackstage:;
- (void)setShouldShowOwnerClaim:;
- (BOOL)shouldShowOwnerBackstage;
- (BOOL)shouldShowOwnerClaim;
- (void)showOnVC:;
- (void)showOnViewController:anchor:;
- (id)initWithItems:;
- (void)dismiss;
- (id)items;
- (void)setStyle:;
- (void)setItems:;
- (void).cxx_destruct;
- (unsigned long long)style;
- (void)touchesEnded:withEvent:;
- (void)viewDidLoad;
- (id)initWithItems:style:;
@end
