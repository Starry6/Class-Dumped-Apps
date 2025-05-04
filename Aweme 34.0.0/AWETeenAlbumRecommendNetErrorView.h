@interface AWETeenAlbumRecommendNetErrorView : UIView
@property (nonatomic) AWETeenAlbumDataController dataController;
@property (nonatomic) AWEMinorAlbum albumModel;
@property (nonatomic) UILabel netErrorLabel;
@property (nonatomic) UILabel netRemindLabel;
@property (nonatomic) UIButton retryButton;
@property (nonatomic) UIButton solutionButton;
@property (nonatomic) UIImageView arrow;
- (void)p_setupUI;
- (void)setDataController:;
- (id)solutionButton;
- (void)setSolutionButton:;
- (id)albumModel;
- (void)setAlbumModel:;
- (id)netErrorLabel;
- (id)netRemindLabel;
- (void)p_retry;
- (void)p_showSolution;
- (id)initWithDataController:originAlbum:;
- (void)setNetErrorLabel:;
- (void)setNetRemindLabel:;
- (void).cxx_destruct;
- (id)arrow;
- (void)setArrow:;
- (id)dataController;
- (void)setRetryButton:;
- (id)retryButton;
@end
