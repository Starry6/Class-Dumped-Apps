@interface IESLiveSaaSGuideStore : NSObject
@property (nonatomic) BOOL showGuide;
@property (nonatomic) IESLiveSaaSCommonGuideModel guideModel;
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)clickGuideButton:;
- (void)didSetAttachingDIContext;
- (void)guestApplyGuideViewShow:;
- (id)guideModel;
- (void)prepareDataFromModel:;
- (id)roomModel;
- (void)setEventContext:;
- (void)setGuideModel:;
- (void)setRoomModel:;
- (void)setShowGuide:;
- (BOOL)showGuide;
- (void)showGuideView:;
- (id)init;
- (void).cxx_destruct;
- (id)eventContext;
- (void)messageReceived:;
@end
