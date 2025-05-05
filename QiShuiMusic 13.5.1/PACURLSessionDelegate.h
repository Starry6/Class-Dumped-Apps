@interface PACURLSessionDelegate : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)URLSession:task:didReceiveChallenge:completionHandler:;
- (void)URLSession:didReceiveChallenge:completionHandler:;
- (void)dealloc;
@end
