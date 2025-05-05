@interface BDARewardedVideoNetClient : NSObject
@property (nonatomic) TTHttpTask httpTask;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configTaskWithURL:completion:;
- (void)configTaskWithURL:params:headers:completion:;
- (id)httpTask;
- (void)invalidAndCancel;
- (void)setHttpTask:;
- (void)cancel;
- (void)resume;
- (void).cxx_destruct;
@end
