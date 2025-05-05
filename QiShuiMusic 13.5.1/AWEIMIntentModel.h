@interface AWEIMIntentModel : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) UIImage avatarImage;
@property (nonatomic) NSString conversationID;
- (BOOL)isValide;
- (void)setName:;
- (void)donate:;
- (void).cxx_destruct;
- (id)name;
- (id)conversationID;
- (void)setConversationID:;
- (void)setAvatarImage:;
- (id)avatarImage;
+ (void)donateWithModels:;
@end
