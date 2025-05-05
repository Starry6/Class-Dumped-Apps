@interface HTSLiveLinkerCreateContent : IESLivePBBaseMessage
@property (nonatomic) q ownerId;
@property (nonatomic) q ownerRoomId;
@property (nonatomic) q linkType;
@property (nonatomic) NSString ownerOpenId;
+ (id)descriptor;
@end
