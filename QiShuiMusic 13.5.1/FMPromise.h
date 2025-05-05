@interface FMPromise : NSObject
@property (nonatomic) FMFuture future;
@property (nonatomic) NSString descriptor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errorOnlyCompletionHandlerAdapter;
- (id)completionHandlerAdapter;
- (BOOL)finishWithNoResult;
- (id)descriptor;
- (id)init;
- (void)setDescriptor:;
- (id)future;
- (BOOL)finishWithResult:;
- (void).cxx_destruct;
- (BOOL)finishWithError:;
- (id)initWithFuture:;
- (BOOL)finishWithResult:error:;
@end
