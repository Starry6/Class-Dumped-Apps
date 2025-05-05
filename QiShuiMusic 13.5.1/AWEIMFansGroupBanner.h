@interface AWEIMFansGroupBanner : UIView
@property (nonatomic) AWEIMFansGroupBannerModel model;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel mainTitleLable;
@property (nonatomic) UILabel subTitleLable;
@property (nonatomic) BOOL trackedBannerShowData;
- (void)clickBanner;
- (void)configWithModel:;
- (id)mainTitleLable;
- (void)resetTrackBannerShowDataFlag;
- (void)setMainTitleLable:;
- (void)setSubTitleLable:;
- (void)setTrackedBannerShowData:;
- (id)subTitleLable;
- (BOOL)trackedBannerShowData;
- (void)tryTrackBannerShowData;
- (id)model;
- (void)setModel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setBgImageView:;
- (id)bgImageView;
+ (id)topBannerSize;
@end
