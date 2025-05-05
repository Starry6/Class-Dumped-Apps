@interface ICRequestOperation : ICAsyncOperation
@property (nonatomic) NSProgress progress;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setProgress:;
- (id)progress;
- (void).cxx_destruct;
- (void)finishWithError:;
- (void)performRequestWithCompletionHandler:;
- (void)performRequestOnOperationQueue:withCompletionHandler:;
@end
