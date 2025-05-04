@interface AWECountryFlagDataModel : NSObject
@property (nonatomic) NSString key;
@property (nonatomic) NSString chineseName;
@property (nonatomic) NSString englishName;
@property (nonatomic) NSString imageUrl;
@property (nonatomic) NSString imageBase64;
@property (nonatomic) NSString imageMd5;
- (id)initWithKey:chineseName:englishName:imageUrl:imageBase64:imageMd5:;
- (void)setChineseName:;
- (void)setEnglishName:;
- (void)setImageBase64:;
- (void)setImageMd5:;
- (id)chineseName;
- (id)imageBase64;
- (id)imageMd5;
- (void)setKey:;
- (id)key;
- (void).cxx_destruct;
- (id)initWithKey:;
- (id)toDictionary;
- (id)imageUrl;
- (void)setImageUrl:;
- (id)englishName;
@end
