@interface AWEIMAudioRecordCancelView : AWEIMRichRecorderCommonView
@property (nonatomic) AWEIMShapeView shapeView;
- (void)p_setupUI;
- (void)startWorkWithPreState:currentState:;
- (void)stopWorkWithPreState:currentState:;
- (void)setShapeView:;
- (id)shapeView;
- (void)normalMode;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)highlightMode;
@end
