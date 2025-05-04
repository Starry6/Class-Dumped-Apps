@interface AWELivePlayOutTrackerIMP : NSObject
@property (nonatomic) <IESLiveDouPlusService> douPlusService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)trackEvent:params:trackContext:;
- (id)douPlusService;
- (void)setDouPlusService:;
- (void)livePlayForRoom:anchor:enterFromAdType:trackContext:isInnerStream:;
- (void)recLivePlayForRoom:anchor:enterFromAdType:trackContext:isInnerStream:;
- (void)trackReceiveLiveInner:;
- (void)trackEnterAdLiveRoomFailWithContext:;
- (void)trackAdDislikeReasonInnerLive:;
- (id)getHeartBrokenImageView;
- (id)getFeedbackBadImageView;
- (BOOL)enableLiveFeedBackDislike;
- (void).cxx_destruct;
@end
