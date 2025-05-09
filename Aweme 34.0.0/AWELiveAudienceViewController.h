@interface AWELiveAudienceViewController : NSObject
@property (nonatomic) HTSLiveRoom roomModel;
@property (nonatomic) AWELiveAudienceViewControllerDelegateProxy audienceDelegateProxy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <AWELiveAudienceDetailDelegate> delegate;
@property (nonatomic) UIViewController audienceViewController;
- (id)roomModel;
- (void)didSetAttachingDIContext;
- (id)currentLiveRoomID;
- (void)audienceQuitAllRoom;
- (void)setRoomModel:;
- (void)startToShowPipWithShowType:;
- (BOOL)unwindToAudienceController:animated:;
- (id)initWithRoomModel:;
- (void)setAudienceDelegateProxy:;
- (void)exitLiveRoomWithType:;
- (void)checkOutterTiggerTransiton;
- (id)factoryFinishViewControllerWithLiveRoomModel:closeInterceptBlock:;
- (void)attachAudienceViewControllerDelegate:;
- (id)audienceDelegateProxy;
- (void)dealloc;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)audienceViewController;
- (void)setAudienceViewController:;
@end
