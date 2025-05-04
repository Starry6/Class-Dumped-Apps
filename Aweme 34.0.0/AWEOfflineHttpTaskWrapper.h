@interface AWEOfflineHttpTaskWrapper : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHttpTask:;
- (id)httpTask;
- (void)continueNetworkTaskBlock:;
- (void)resume;
- (void)cancel;
- (long long)state;
- (void)setPriority:;
- (void).cxx_destruct;
- (void)suspend;
@end
