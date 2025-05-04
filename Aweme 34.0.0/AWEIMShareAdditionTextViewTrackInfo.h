@interface AWEIMShareAdditionTextViewTrackInfo : NSObject
@property (nonatomic) BOOL didPastedBeforeSend;
@property (nonatomic) double inputMethodUseTime;
@property (nonatomic) double currentKeyboardShowTime;
@property (nonatomic) double keyboardShowDurationBeforeSend;
@property (nonatomic) q characterChangedCountBeforeSend;
- (void)setInputMethodUseTime:;
- (long long)characterChangedCountBeforeSend;
- (void)setCharacterChangedCountBeforeSend:;
- (double)currentKeyboardShowTime;
- (double)keyboardShowDurationBeforeSend;
- (void)setKeyboardShowDurationBeforeSend:;
- (void)setCurrentKeyboardShowTime:;
- (void)setDidPastedBeforeSend:;
- (double)inputMethodUseTime;
- (BOOL)didPastedBeforeSend;
@end
