@interface AWEStudioEditMusicFeatureConfig : AWEStudioComposerBaseFeatureConfig
@property (nonatomic) BOOL selectMusicButtonEnabled;
@property (nonatomic) BOOL enableSelectMusicAutomatically;
@property (nonatomic) AWEStudioEditMusicVolumeConfig volumeConfig;
- (id)volumeConfig;
- (BOOL)selectMusicButtonEnabled;
- (void)setSelectMusicButtonEnabled:;
- (BOOL)enableSelectMusicAutomatically;
- (void)setEnableSelectMusicAutomatically:;
- (id)initWithMode:;
- (void).cxx_destruct;
@end
