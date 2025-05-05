@interface IESLiveBackendRequestState : NSObject
@property (nonatomic) Q requestState;
- (unsigned long long)requestState;
- (void)setRequestState:;
- (BOOL)validRequest;
@end
