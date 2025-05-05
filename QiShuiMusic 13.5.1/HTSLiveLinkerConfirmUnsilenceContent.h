@interface HTSLiveLinkerConfirmUnsilenceContent : IESLivePBBaseMessage
@property (nonatomic) NSString fromOpenId;
@property (nonatomic) q fromRoomId;
@property (nonatomic) NSString toast;
+ (id)descriptor;
@end
