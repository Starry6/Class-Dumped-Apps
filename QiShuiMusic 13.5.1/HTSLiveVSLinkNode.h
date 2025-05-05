@interface HTSLiveVSLinkNode : IESLivePBBaseMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) HTSLiveUser owner;
@property (nonatomic) BOOL hasOwner;
+ (id)descriptor;
@end
