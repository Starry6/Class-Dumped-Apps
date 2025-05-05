@interface IESLivePreAnnouncementFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) BOOL isAnchor;
@property (nonatomic) <IESLiveSaaSAnchorTimeSchedulePreference> timeNoticePref;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didCreateRoom:;
- (void)didUpdateRoom:;
- (void)fakeTimeScheduleMessage;
- (id)initWithRoom:trackContext:componentContext:;
- (void)setIsAnchor:;
- (void)setTimeNoticePref:;
- (id)timeNoticePref;
- (void)trackTimeScheduleShow;
- (BOOL)isAnchor;
- (void).cxx_destruct;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
