@interface AWEFansListMixFansCountCell : UICollectionViewCell
@property (nonatomic) UIView borderContainerView;
@property (nonatomic) UIView lineView;
@property (nonatomic) AWEFansListMixFansCountView douyinFansView;
@property (nonatomic) AWEFansListMixFansCountView otherPlatformFansView;
@property (nonatomic) AWEFansListFansCountWrapperModel wrapperModel;
- (void)configModel:;
- (void)setWrapperModel:;
- (void)trackFansPanelWithAction:;
- (id)wrapperModel;
- (id)borderContainerView;
- (id)douyinFansView;
- (id)otherPlatformFansView;
- (void)trackFansPanelWithAction:extraParam:;
- (void)setBorderContainerView:;
- (void)setDouyinFansView:;
- (void)setOtherPlatformFansView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)lineView;
- (void)setLineView:;
- (void)setupUI;
@end
