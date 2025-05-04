@interface AWEShareSchemaSpecialConfigModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray coverURLs;
@property (nonatomic) q roomType;
- (id)coverURLs;
- (void)setCoverURLs:;
- (long long)roomType;
- (void)setRoomType:;
- (id)subtitle;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)JSONKeyPathsByPropertyKey;
@end
