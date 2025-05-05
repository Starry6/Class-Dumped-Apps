@interface IESLiveResolutionChooseTableViewCell : UITableViewCell
@property (nonatomic) UIView customBackgroundView;
@property (nonatomic) BOOL forLandscape;
@property (nonatomic) BOOL isPaidResolution;
@property (nonatomic) UIImageView tagView;
- (id)customBackgroundColorForCurrentState;
- (BOOL)isForLandscape;
- (BOOL)isPaidResolution;
- (void)setForLandscape:;
- (void)setIsPaidResolution:;
- (id)initWithStyle:reuseIdentifier:;
- (void)updateStyle:;
- (void)layoutSubviews;
- (void)setUserInteractionEnabled:;
- (void)setCustomBackgroundView:;
- (void)setup;
- (void).cxx_destruct;
- (id)customBackgroundView;
- (id)tagView;
- (void)setTagView:;
@end
