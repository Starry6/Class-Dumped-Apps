@interface IESLiveComponentSyncGroupSubscriber : NSObject
@property (nonatomic) NSString taskID;
@property (nonatomic) @? callback;
- (id)callback;
- (void)setCallback:;
- (void)setTaskID:;
- (void).cxx_destruct;
- (id)taskID;
@end
