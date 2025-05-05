@interface BDASplashEffectUtils : NSObject
@property (nonatomic) AVPlayer audioPlayer;
@property (nonatomic) Q detectOptions;
- (unsigned long long)detectOptions;
- (void)setDetectOptions:;
- (void)startEffectWithType:;
- (void)setAudioPlayer:;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)audioPlayer;
+ (id)sharedInstance;
@end
