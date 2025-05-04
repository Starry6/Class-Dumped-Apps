@interface AWEIMInteractiveEmojiHaptic : NSObject
@property (nonatomic) CHHapticEngine engine;
@property (nonatomic) BOOL isSupportsHaptics;
- (BOOL)isSupportsHaptics;
- (void)playWithFilePath:;
- (void)setIsSupportsHaptics:;
- (id)init;
- (id)engine;
- (void)setEngine:;
- (void).cxx_destruct;
- (void)stop;
+ (id)sharedInstance;
@end
