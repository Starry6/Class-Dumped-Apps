@interface AWEBackgroundPlayAudioConfig : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) NSDictionary logExtraParams;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)commonTrackParams;
- (void)onSwitchChanged:;
- (id)configCellModelWithAwemeModel:;
- (void)trackBackgroundPlayAudioShow;
- (id)logExtraParams;
- (id)cellModelWithAwemeModel:;
- (void)setLogExtraParams:;
- (void).cxx_destruct;
+ (BOOL)shouldShowBGPlayAudioSwitchWithModel:;
@end
