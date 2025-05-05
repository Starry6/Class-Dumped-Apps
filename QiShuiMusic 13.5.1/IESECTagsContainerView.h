@interface IESECTagsContainerView : UIView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) double tagSpacing;
- (void)addTagView:;
- (id)initWithTagViews:;
- (void)insertTagView:atIndex:;
- (void)removeAllTagViews;
- (void)removeTagView:;
- (void)setTagSpacing:;
- (void)setupWithTagViews:;
- (double)tagSpacing;
- (id)tagViews;
- (void)setStackView:;
- (id)stackView;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
