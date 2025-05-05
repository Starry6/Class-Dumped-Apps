@interface HTSLiveRoomAnchorData : IESLivePBBaseMessage
@property (nonatomic) NSString finishSchema;
@property (nonatomic) HTSLiveGameAnchorInfo gameAnchorInfo;
@property (nonatomic) BOOL hasGameAnchorInfo;
@property (nonatomic) NSString frameScale;
+ (id)descriptor;
@end
