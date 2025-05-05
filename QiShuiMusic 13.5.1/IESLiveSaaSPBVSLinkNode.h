@interface IESLiveSaaSPBVSLinkNode : GPBMessage
@property (nonatomic) q roomId;
@property (nonatomic) NSString roomIdStr;
@property (nonatomic) NSString title;
@property (nonatomic) q liveRoomMode;
@property (nonatomic) IESLiveSaaSPBUser owner;
@property (nonatomic) BOOL hasOwner;
+ (id)descriptor;
@end
