@interface AWEECOMIMPageClickTask : NSObject
@property (nonatomic) @? completion;
- (void)completeFailureWithActionType:errorMsg:;
- (void)completeSuccessWithActionType:;
- (void)completeFailureWithActionType:code:errorMsg:;
- (id)completion;
- (void)setCompletion:;
- (void)completeWithResult:;
- (void).cxx_destruct;
- (id)initWithCompletion:;
@end
