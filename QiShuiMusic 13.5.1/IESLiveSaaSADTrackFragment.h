@interface IESLiveSaaSADTrackFragment : IESLiveRoomComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commentSucceed:;
- (void)didGiveGiftWithResponse:;
- (void)didReceiveHTSLiveFansclubMessage:;
- (void)didSetAttachingDIContext;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
