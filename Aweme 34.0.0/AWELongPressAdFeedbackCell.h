@interface AWELongPressAdFeedbackCell : UICollectionViewCell
@property (nonatomic) AWEAdAttitudeFilterWordModel filterWordModel;
@property (nonatomic) UILabel dislikeLabel;
- (id)dislikeLabel;
- (void)setDislikeLabel:;
- (void)configNormalStyle;
- (void)configSelectedStyle;
- (id)filterWordModel;
- (void)setFilterWordModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setSelected:;
- (void)setupViews;
@end
