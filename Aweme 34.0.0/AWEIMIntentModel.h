@interface AWEIMIntentModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSString conversationID;
- (BOOL)isValide;
- (id)conversationID;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (void)donate:;
- (void)setConversationID:;
- (void)setAvatarImage:;
- (id)avatarImage;
+ (id)createSendMessageIntentWithGroupName:cid:;
+ (void)donateWithModels:;
@end
