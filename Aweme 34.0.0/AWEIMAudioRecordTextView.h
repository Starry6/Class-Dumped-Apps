@interface AWEIMAudioRecordTextView : AWEIMRichRecorderCommonView
@property (nonatomic) UILabel textLabel;
- (void)p_setupUI;
- (void)startWorkWithPreState:currentState:;
- (void)stopWorkWithPreState:currentState:;
- (void)normalMode;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)highlightMode;
- (void)setTextLabel:;
@end
