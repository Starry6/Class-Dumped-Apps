@interface HTSLiveRoomAuthStatus_RoomAuthSpecialStyle_Style : IESLivePBBaseMessage
@property (nonatomic) NSInteger unableStyle;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger offType;
@property (nonatomic) NSInteger anchorSwitch;
@property (nonatomic) NSString switchStatusTipMsg;
@property (nonatomic) NSString switchStatusAnchorTipMsg;
@property (nonatomic) NSInteger anchorSwitchForPaidLive;
@property (nonatomic) NSString contentForPaidLive;
+ (id)descriptor;
@end
