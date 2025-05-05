@interface IESLiveInteractSubtitleCollectionViewCell : UICollectionViewCell
@property (nonatomic) IESLiveInteractSubtitleConfig config;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel textLabel;
- (void)initViews;
- (id)textLabel;
- (void)setConfig:;
- (id)initWithConfig:;
- (void).cxx_destruct;
- (id)config;
- (id)nameLabel;
- (void)setTextLabel:;
- (void)setNameLabel:;
@end
