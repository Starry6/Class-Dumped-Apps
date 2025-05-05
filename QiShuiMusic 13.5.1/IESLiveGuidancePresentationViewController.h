@interface IESLiveGuidancePresentationViewController : UIViewController
@property (nonatomic) IESLiveGuidancePresentationView guidancePresentationView;
@property (nonatomic) NSString guidanceTips;
@property (nonatomic) NSArray guidanceImages;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guidanceImages;
- (id)guidancePresentationView;
- (id)guidanceTips;
- (void)setGuidanceImages:;
- (void)setGuidancePresentationView:;
- (void)setGuidanceTips:;
- (double)contentHeight;
- (void)dismiss;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)dismissBlock;
- (void)setDismissBlock:;
@end
