@interface AWEIMMessageFilePreviewViewModelErrorObject : NSObject
@property (nonatomic) q errorReason;
@property (nonatomic) NSString errTips;
@property (nonatomic) BOOL canRetry;
- (id)errTips;
- (void)setErrTips:;
- (void)setCanRetry:;
- (id)initWithReason:;
- (BOOL)canRetry;
- (long long)errorReason;
- (void).cxx_destruct;
- (void)setErrorReason:;
@end
