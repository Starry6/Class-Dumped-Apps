@interface CNVisualIdentityContactAvatarProvider : NSObject
@property (nonatomic) CNAvatarImageRenderer avatarImageRenderer;
@property (nonatomic) <CNAvatarImageRenderingScope> renderingScope;
- (id)init;
- (id)initWithSettings:;
- (void).cxx_destruct;
- (id)avatarImageForContact:withSize:includePlaceholder:imageHandler:;
- (id)imageForAvatarAccessoryView:withSize:;
- (id)avatarImageRenderer;
- (void)setAvatarImageRenderer:;
- (id)renderingScope;
- (void)setRenderingScope:;
+ (id)descriptorForRequiredKeys;
@end
