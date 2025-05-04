@interface AWETabbarGeneralButtonImageTask : NSObject
@property (nonatomic) q taskID;
@property (nonatomic) q status;
@property (nonatomic) @? showBlock;
@property (nonatomic) @? dismissBlock;
@property (nonatomic) @? completionBlock;
- (id)showBlock;
- (void)setShowBlock:;
- (void)showWithResult:;
- (void)setStatus:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)description;
- (BOOL)isValid;
- (void).cxx_destruct;
- (long long)status;
- (void)setTaskID:;
- (long long)taskID;
- (void)cancelWithReason:;
- (id)dismissBlock;
- (void)setDismissBlock:;
- (id)initWithTaskID:;
+ (id)createTask;
@end
