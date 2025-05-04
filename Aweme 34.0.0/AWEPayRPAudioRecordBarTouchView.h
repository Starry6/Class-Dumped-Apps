@interface AWEPayRPAudioRecordBarTouchView : AWEPayRPAudioRecordBaseTouchView
@property (nonatomic) UIImageView audioWaveImageView;
@property (nonatomic) UILabel titleLabel;
- (id)audioWaveImageView;
- (void)setAudioWaveImageView:;
- (void)startLoading;
- (void)stopLoading;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
@end
