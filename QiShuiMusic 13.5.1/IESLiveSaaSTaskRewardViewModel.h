@interface IESLiveSaaSTaskRewardViewModel : NSObject
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)appendShowCount;
- (BOOL)canAutoShownGiftBarTodayWithMaxCount:;
- (BOOL)canShowGiftBarWithResponse:;
- (id)componentContext;
- (void)componentDidMount;
- (void)didSetAttachingDIContext;
- (void)fetchGuideBarIfNeeded;
- (id)firstEnterDate;
- (id)firstShownPushGiftBarTimeKey;
- (id)hadShownPushGiftBarCountKey;
- (id)initWithRoom:context:componentContext:;
- (void)popGiftPanelForTask;
- (id)roomDrawModel;
- (void)setComponentContext:;
- (void)setTrackContext:;
- (void)showGuideBarIfNeeded;
- (id)trackContext;
- (id)currentDate;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:;
- (void)messageReceived:;
@end
