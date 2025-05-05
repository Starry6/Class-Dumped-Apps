@interface IESIMOfflineHttpTaskWrapper : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) q state;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)continueNetworkTaskBlock:;
- (id)httpTask;
- (void)setHttpTask:;
- (void)cancel;
- (void)setPriority:;
- (void)suspend;
- (void)resume;
- (long long)state;
- (void).cxx_destruct;
@end
