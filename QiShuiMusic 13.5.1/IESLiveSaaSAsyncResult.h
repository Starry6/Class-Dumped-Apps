@interface IESLiveSaaSAsyncResult : NSObject
@property (nonatomic) BOOL finished;
@property (nonatomic) @ result;
@property (nonatomic) NSError error;
- (id)onResult;
- (id)result;
- (BOOL)finished;
- (void)finishWithResult:;
- (id)error;
- (void).cxx_destruct;
- (void)finishWithError:;
@end
