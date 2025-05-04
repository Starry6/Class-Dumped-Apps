@interface AWETrackerProtocolImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldBlockV1WithEvent:;
- (BOOL)shouldBlockV3DoubleSendWithEvent:;
- (BOOL)shouldFilterV1Event:;
- (BOOL)shouldSendV1EventWhenTrackV3Event:;
- (void)willTrack:;
@end
