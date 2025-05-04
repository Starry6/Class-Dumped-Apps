@interface AWETemplateTagsCommonView : UIView
@property (nonatomic) AWETemplateStaticLabelInfoModel model;
@property (nonatomic) UIStackView stackView;
@property (nonatomic) <AWETemplateTagsTemplateViewDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)layoutSubviews;
- (void)didClickWithEvent:;
- (void)didTapContainerView;
- (void)addGestureForContainer;
- (id)generateElementWithModel:;
- (void)addGestureForElement:;
- (void)didTapElementView:;
- (void)setModel:;
- (id)stackView;
- (void)setStackView:;
- (id)delegate;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setupUI;
- (void)updateWithModel:;
@end
