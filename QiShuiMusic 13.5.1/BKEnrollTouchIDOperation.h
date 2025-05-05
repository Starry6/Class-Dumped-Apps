@interface BKEnrollTouchIDOperation : BKEnrollOperation
@property (nonatomic) <BKEnrollTouchIDOperationDelegate> delegate;
- (BOOL)startWithError:;
- (void)dealloc;
- (void)homeButtonPressed:;
- (void)statusMessage:client:;
- (id)initWithDevice:;
- (void)enrollResult:details:client:;
- (id)createEnrollProgressInfo:;
@end
