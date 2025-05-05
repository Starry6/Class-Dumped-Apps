@interface IESECommerceSpeakerView : UIView
@property (nonatomic) UIImageView speakerImageView;
@property (nonatomic) NSString speakerImageName;
@property (nonatomic) NSString muteSpeakerImageName;
@property (nonatomic) BOOL isMute;
- (id)muteSpeakerImageName;
- (void)setIsMute:;
- (void)setMuteSpeakerImageName:;
- (void)setSpeakerImageName:;
- (void)setSpeakerImageView:;
- (void)setSpeakerViewImageName:muteImageName:isMute:;
- (void)setUpSubViews;
- (id)speakerImageName;
- (id)speakerImageView;
- (void)updateSpeakerViewBackgroundColor:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)isMute;
@end
