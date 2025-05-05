@interface MPAsyncOperation : NSOperation
@property (nonatomic) NSError error;
@property (nonatomic) ICUserIdentity userIdentity;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)execute;
- (id)init;
- (void)start;
- (BOOL)isConcurrent;
- (void)finish;
- (BOOL)isExecuting;
- (id)error;
- (BOOL)isAsynchronous;
- (BOOL)isFinished;
- (id)userIdentity;
- (void).cxx_destruct;
- (void)setUserIdentity:;
- (void)finishWithError:;
@end
