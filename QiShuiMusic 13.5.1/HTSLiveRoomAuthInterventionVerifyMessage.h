@interface HTSLiveRoomAuthInterventionVerifyMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString name;
@property (nonatomic) q status;
@property (nonatomic) NSInteger unableStyle;
@property (nonatomic) NSString content;
@property (nonatomic) NSString switchStatusTipMsg;
@property (nonatomic) NSString switchStatusAnchorTipMsg;
+ (id)descriptor;
@end
