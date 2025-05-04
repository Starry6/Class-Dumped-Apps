@interface AWEProfileExtensionEditInfoModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) AWEURLModel iconUrlDark;
@property (nonatomic) AWEURLModel iconUrlLight;
@property (nonatomic) Q showOnEditPage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)iconUrlLight;
- (void)setIconUrlLight:;
- (id)iconUrlDark;
- (void)setIconUrlDark:;
- (unsigned long long)showOnEditPage;
- (void)setShowOnEditPage:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
