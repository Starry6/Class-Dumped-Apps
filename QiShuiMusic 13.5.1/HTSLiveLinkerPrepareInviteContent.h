@interface HTSLiveLinkerPrepareInviteContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) NSString toOpenId;
@property (nonatomic) HTSLiveUser invitorUser;
@property (nonatomic) BOOL hasInvitorUser;
@property (nonatomic) HTSLiveText content;
@property (nonatomic) BOOL hasContent;
@property (nonatomic) NSString source;
+ (id)descriptor;
@end
