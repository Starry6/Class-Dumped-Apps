@interface HTSLiveEmojiPermission : IESLivePBBaseMessage
@property (nonatomic) BOOL hasPermission;
@property (nonatomic) NSString toastWithoutPermission;
@property (nonatomic) NSString bottomText;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
