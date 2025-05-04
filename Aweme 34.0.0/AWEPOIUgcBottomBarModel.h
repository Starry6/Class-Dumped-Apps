@interface AWEPOIUgcBottomBarModel : MTLModel
@property (nonatomic) NSArray backgroundImageUrls;
@property (nonatomic) NSArray darkBackgrounImageUrls;
@property (nonatomic) BOOL hasUserRated;
@property (nonatomic) NSArray icons;
@property (nonatomic) NSString title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)hasUserRated;
- (void)setHasUserRated:;
- (id)backgroundImageUrls;
- (void)setBackgroundImageUrls:;
- (id)darkBackgrounImageUrls;
- (void)setDarkBackgrounImageUrls:;
- (id)icons;
- (void)setIcons:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
