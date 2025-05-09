@interface IESECWinGuidePopoverViewController : UIViewController
@property (nonatomic) IESECWinGuidePopoverView guidePopover;
@property (nonatomic) Q popoverDirection;
@property (nonatomic) double arrowOffset;
@property (nonatomic) UIView attachView;
@property (nonatomic) IESECWinGuidePopoverRootView rootView;
@property (nonatomic) NSString guidePopoverText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)attachView;
- (double)calcuGuidePopoverWidth;
- (void)dismissGuidePopover;
- (id)guidePopover;
- (id)guidePopoverText;
- (id)initWithGuidePopoverDirection:attachView:;
- (unsigned long long)popoverDirection;
- (void)setAttachView:;
- (void)setGuidePopover:;
- (void)setGuidePopoverText:;
- (void)setPopoverDirection:;
- (void)setUpConstranits;
- (void)showOnVC:;
- (void)dealloc;
- (void)setArrowOffset:;
- (double)arrowOffset;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (id)rootView;
- (void)setRootView:;
@end
