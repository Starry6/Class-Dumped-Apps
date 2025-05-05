@interface IESLiveRevenuePlayRedEnvelopeAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchAllRedEnvelopesWithRoomId:;
- (id)fetchGrabRedEnvelopUserListWithEnvelopeID:type:dressId:roomId:;
- (void)requestFollowInfoWithCompletion:room:user:;
- (void)requestLuckyBoxReceiveApiWithBoxIds:completion:;
- (void)requestLuckyboxShortTouchApiWithRoomId:;
@end
