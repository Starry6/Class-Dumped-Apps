@interface AWEPLVCardDescAuthorElement : AWEPLVCardDescBaseElement
@property (nonatomic) NSArray avatarImageUrl;
@property (nonatomic) NSString name;
@property (nonatomic) UIFont font;
- (id)avatarImageUrl;
- (void)setAvatarImageUrl:;
- (void)configName:font:size:;
- (void)configAvatarImageWithUrlArray:;
- (void)applyView:;
- (Class)viewClass;
- (id)font;
- (void).cxx_destruct;
- (void)setFont:;
- (void)setName:;
- (id)name;
- (long long)elementType;
@end
