@interface AWETeenModeAlertOptContentMaterialModel : MTLModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString category;
@property (nonatomic) NSString content;
@property (nonatomic) NSString logoImage;
@property (nonatomic) NSString backgroundImage;
@property (nonatomic) BOOL shouldShowDash;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowDash;
- (void)setShouldShowDash:;
- (id)backgroundImage;
- (void)setBackgroundImage:;
- (id)category;
- (id)content;
- (void)setCategory:;
- (void)setContent:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)logoImage;
- (void)setLogoImage:;
+ (id)JSONKeyPathsByPropertyKey;
@end
