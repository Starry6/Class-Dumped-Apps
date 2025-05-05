@interface IMURLRequestSession : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)performRequest:completionBlock:;
- (void)URLSession:didBecomeInvalidWithError:;
- (id)initWithConfiguration:queue:requiresIDSHost:;
- (void).cxx_destruct;
- (void)finishTasksAndInvalidate;
- (void)performRequest:completionBlockWithTimingData:;
+ (id)sessionWithConfiguration:queue:requiresIDSHost:;
+ (id)sharedSessionRequiringIDSHost;
+ (id)sharedSession;
@end
