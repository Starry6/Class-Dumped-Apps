@interface AWELivePreStreamLiveDistributeHeaderView : UICollectionReusableView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) IESLiveImageView closeImageView;
@property (nonatomic) AWELiveWebPPlayer liveAnimationView;
@property (nonatomic) NSData liveAnimationDefaultData;
- (void)p_initUI;
- (void)setLiveAnimationView:;
- (id)liveAnimationView;
- (id)liveAnimationDefaultData;
- (void)setLiveAnimationDefaultData:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitle:;
- (id)closeImageView;
- (void)setCloseImageView:;
@end
