@interface TITypologyStatisticAutocorrectionListUI : TITypologyStatistic
@property (nonatomic) q inputsWhileHidden;
@property (nonatomic) q inputsWhileDisplayed;
@property (nonatomic) q hiddenToDisplayed;
@property (nonatomic) q displayedToHidden;
- (void)visitRecordKeyboardInput:;
- (id)structuredReport;
- (void)visitRecordSync:;
- (void)setListUIDisplayed:;
- (void)visitRecordAutocorrections:;
- (void)addInputCount;
- (long long)inputsWhileHidden;
- (long long)inputsWhileDisplayed;
- (long long)hiddenToDisplayed;
- (long long)displayedToHidden;
@end
