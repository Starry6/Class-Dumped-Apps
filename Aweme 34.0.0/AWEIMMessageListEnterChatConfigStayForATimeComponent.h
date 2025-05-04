@interface AWEIMMessageListEnterChatConfigStayForATimeComponent : AWEIMComponentBase
@property (nonatomic) BOOL hasCommerceTimed;
@property (nonatomic) q stayDurationSec;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)hostVC_willDealloc;
- (void)componentDidMounted:;
- (void)hostVC_viewDidAppear;
- (id)messageListEnterChatRequestParamsForRequestSource:;
- (void)updateMessageListEnterChatData:requestSource:;
- (id)vcParent;
- (BOOL)hasCommerceTimed;
- (void)p_startTimingWithTimerName:duration:;
- (void)setHasCommerceTimed:;
- (void)setStayDurationSec:;
- (long long)stayDurationSec;
+ (BOOL)canCreateComponentWithContext:;
@end
