@interface AWERTVEffectEmojiAnimationController : NSObject
@property (nonatomic) AWERTVEffectEmojiAnimationView animationView;
@property (nonatomic) CHHapticEngine hapticEngine;
@property (nonatomic) <RTVVoipContextManagerInterface> contextManager;
@property (nonatomic) <RxInjector> injector;
@property (nonatomic) BOOL animationEnable;
@property (nonatomic) <RTVXRStateRecorder> xrStateRecorder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)rxAwakeFromPropertyInjection;
- (BOOL)animationEnable;
- (BOOL)__interfaceOrientationLayoutIsPortrait;
- (void)__playHapticWithFilePath:;
- (void)setAnimationEnable:;
- (BOOL)__isSupportHaptics;
- (id)xrStateRecorder;
- (void)playEffectEmojiAnimation:;
- (void)changeEmojiPlayAnimationEnable:;
- (id)injector;
- (void).cxx_destruct;
- (id)hapticEngine;
- (void)setHapticEngine:;
- (id)animationView;
- (void)setAnimationView:;
- (id)contextManager;
@end
