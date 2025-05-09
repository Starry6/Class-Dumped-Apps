@interface AWERecordSelectMusicViewState : NSObject
@property (nonatomic) BOOL supportSelectMusic;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL shouldAnimate;
@property (nonatomic) BOOL showAnimate;
@property (nonatomic) BOOL enableImageRotation;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) BOOL showLabelShadow;
@property (nonatomic) Q animationType;
@property (nonatomic) ACCRecordSelectMusicCoverInfo musicCoverInfo;
- (id)musicCoverInfo;
- (void)setMusicCoverInfo:;
- (void)setEnableImageRotation:;
- (BOOL)showLabelShadow;
- (BOOL)supportSelectMusic;
- (BOOL)enableImageRotation;
- (id)initWithSupportSelectMusic:enable:hidden:animationType:musicCoverInfo:;
- (void)setShowAnimate:;
- (void)setSupportSelectMusic:;
- (BOOL)showAnimate;
- (void)setShowLabelShadow:;
- (unsigned long long)animationType;
- (BOOL)enable;
- (BOOL)shouldAnimate;
- (void)setHidden:;
- (void).cxx_destruct;
- (void)setAnimationType:;
- (BOOL)hidden;
- (void)setEnable:;
- (BOOL)showCloseButton;
- (void)setShouldAnimate:;
- (void)setShowCloseButton:;
@end
