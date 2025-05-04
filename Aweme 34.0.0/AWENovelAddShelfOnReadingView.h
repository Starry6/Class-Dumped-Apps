@interface AWENovelAddShelfOnReadingView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton addShelfBtn;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) <AWENovelAddShelfOnReadingViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAddShelfBtn:;
- (id)addShelfBtn;
- (void)onAddShelfClick:;
- (void)onCloseClick:;
- (id)readerInsertedViewRequestInsertedView;
- (void)readerInsertedViewBackgroundConfigChange:;
- (id)init;
- (id)delegate;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (id)titleLabel;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setCloseButton:;
- (id)closeButton;
@end
