@interface AWENearbyRelationCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIView backgroundColorView;
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) AWENearbyRelationView relationView;
@property (nonatomic) AWENearbyRelationCardModel model;
- (void)__setupUI;
- (void)__layoutUI;
- (id)relationView;
- (void)setRelationView:;
- (void)renderWithModel:;
- (void)__trackEnterPersonalDetailIfNeedsWithCandidateModel:;
- (void)__updateBottomStackViewContent;
- (void)setModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)backgroundColorView;
- (id)model;
- (void).cxx_destruct;
- (void)setBackgroundColorView:;
- (void)layoutSubviews;
- (id)backgroundImageView;
- (void)setBackgroundImageView:;
@end
