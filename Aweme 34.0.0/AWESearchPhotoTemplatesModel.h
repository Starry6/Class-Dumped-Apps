@interface AWESearchPhotoTemplatesModel : AWEBaseApiModel
@property (nonatomic) NSArray photoTemplatesArray;
@property (nonatomic) NSString title;
@property (nonatomic) BOOL hasMoreCards;
@property (nonatomic) NSString aladdinID;
- (id)aladdinID;
- (void)setHasMoreCards:;
- (id)photoTemplatesArray;
- (void)setPhotoTemplatesArray:;
- (BOOL)hasMoreCards;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)aladdinIDJSONTransformer;
+ (id)photoTemplatesArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
