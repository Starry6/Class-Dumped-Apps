@interface AWEProfileEditSubmitParams : NSObject
@property (nonatomic) AWEProfileEditSubmitContext context;
@property (nonatomic) BOOL toastAndReturn;
@property (nonatomic) NSString statusMsg;
@property (nonatomic) NSError error;
@property (nonatomic) q toastBack;
@property (nonatomic) AWEProfileEditResponseToastBackInfo toastBackInfo;
- (id)statusMsg;
- (void)setStatusMsg:;
- (long long)toastBack;
- (void)setToastBack:;
- (id)toastBackInfo;
- (void)setToastBackInfo:;
- (BOOL)toastAndReturn;
- (void)setToastAndReturn:;
- (void)setError:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)error;
- (id)context;
@end
