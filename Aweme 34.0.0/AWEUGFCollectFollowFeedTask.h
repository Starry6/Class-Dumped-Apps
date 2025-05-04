@interface AWEUGFCollectFollowFeedTask : AWEUGFCollectFollowBaseTask
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didReceiveFollowUserResponse:context:error:;
- (void)trackLogWithKey:message:;
- (void)receiveEvent:params:;
- (void)dealFppTriggerResponse:followed:;
- (void)dealloc;
- (id)initWithContext:;
+ (id)topic;
@end
