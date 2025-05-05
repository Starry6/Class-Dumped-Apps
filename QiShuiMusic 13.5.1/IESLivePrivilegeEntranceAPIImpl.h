@interface IESLivePrivilegeEntranceAPIImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)fetchPayGradeWithRoomId:completion:;
- (void)fetchPrivilegeEntranceBarInfoWithParams:completion:;
- (void)monitorPayGradeWithDuration:error:;
- (void)monitorPrivilegeEntranceTouchPositioWithMetaID:duration:error:;
- (void)monitorPrivilegeGrowthWithDuration:error:;
- (void)uploadTouchPositionAckWithAnchorID:roomID:metaID:;
@end
