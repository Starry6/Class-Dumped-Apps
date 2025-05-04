@interface AWESearchMerchandiseVideoBaseCell : AWESearchOptimizeGoodsCell
@property (nonatomic) UIImageView videoTagView;
@property (nonatomic) AWESearchVideoView videoView;
@property (nonatomic) NSString referString;
@property (nonatomic) AWESearchMerchandiseGoodsInfoView infoView;
- (id)referString;
- (void)setReferString:;
- (double)currPlaybackTime;
- (void)configWithModel:;
- (void)setCurrPlaybackTime:;
- (id)videoTagView;
- (void)setVideoTagView:;
- (void)setActionRecord:;
- (void)videoStopAndFree;
- (void)videoInit;
- (void)didBecomeActive;
- (id)videoView;
- (void)setVideoView:;
- (void)didResignActive;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)activeView;
- (id)infoView;
- (void)setInfoView:;
+ (id)identifier;
@end
