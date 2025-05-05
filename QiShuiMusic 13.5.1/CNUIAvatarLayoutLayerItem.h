@interface CNUIAvatarLayoutLayerItem : NSObject
@property (nonatomic) CALayer layer;
@property (nonatomic) <CNCancelable> avatarImageRendererToken;
- (void)setLayer:;
- (id)layer;
- (id)initWithLayer:;
- (void).cxx_destruct;
- (void)resetToken;
- (id)avatarImageRendererToken;
- (void)setAvatarImageRendererToken:;
@end
