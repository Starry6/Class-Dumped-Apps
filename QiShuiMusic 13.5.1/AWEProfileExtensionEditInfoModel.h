@interface AWEProfileExtensionEditInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString iconUrlDark;
@property (nonatomic) NSString iconUrlLight;
@property (nonatomic) q showOnEditPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setIconUrlDark:;
- (id)iconUrlDark;
- (id)iconUrlLight;
- (void)setIconUrlLight:;
- (void)setShowOnEditPage:;
- (long long)showOnEditPage;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
- (id)subtitle;
+ (id)JSONKeyPathsByPropertyKey;
@end
