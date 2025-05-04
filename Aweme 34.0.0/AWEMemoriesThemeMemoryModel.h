@interface AWEMemoriesThemeMemoryModel : MTLModel
@property (nonatomic) NSString themeId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString tagId;
@property (nonatomic) NSString musicId;
@property (nonatomic) NSArray localIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)musicId;
- (id)themeId;
- (void)updateLocalIdentifiers:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (id)tagId;
- (id)localIdentifiers;
+ (id)JSONKeyPathsByPropertyKey;
@end
