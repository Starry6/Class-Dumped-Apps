@interface IESLiveRelatedLivePortraitEntryView : UIView
@property (nonatomic) IESLiveRelatedLiveBaseBtn relatedLiveButton;
@property (nonatomic) UIButton arrowButton;
@property (nonatomic) IESLiveRelatedLiveEntryItem item;
@property (nonatomic) @? arrowButtonDidClick;
- (id)arrowButtonDidClick;
- (id)initWithEntryItem:;
- (void)onClickArrowButton;
- (id)relatedLiveButton;
- (void)setArrowButtonDidClick:;
- (void)setRelatedLiveButton:;
- (void)updatePaidTag:;
- (void)updateWithEntryItem:;
- (id)item;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setupView;
- (id)arrowButton;
- (void)setArrowButton:;
- (void)updateTitle:;
@end
