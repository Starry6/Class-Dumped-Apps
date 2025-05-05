@interface HTSLiveRoomVerifyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger action;
@property (nonatomic) NSString content;
@property (nonatomic) q noticeType;
@property (nonatomic) BOOL closeRoom;
@property (nonatomic) NSInteger unableStyle;
@property (nonatomic) NSString tipContent;
@property (nonatomic) NSInteger anchorSwitch;
@property (nonatomic) NSString switchStatusTipMsg;
@property (nonatomic) NSString switchStatusAnchorTipMsg;
+ (id)descriptor;
@end
