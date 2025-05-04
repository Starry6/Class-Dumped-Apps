@interface AWEIMRichRecorderCommonView : UIView
@property (nonatomic) AWEIMRichRecorderViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)startWorkWithPreState:currentState:;
- (void)stopWorkWithPreState:currentState:;
- (void)willStopWorkWithLeftTime:preState:currentState:;
- (void)increaseVolumeAnimation:currentTime:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)updateWithViewModel:;
@end
