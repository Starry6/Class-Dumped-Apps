@interface AWEDiscoverCategoryRecordModel : AWEBaseApiModel
@property (nonatomic) NSString wordID;
@property (nonatomic) NSNumber wordPosition;
@property (nonatomic) NSString wordContent;
@property (nonatomic) NSString source;
@property (nonatomic) BOOL isTracked;
@property (nonatomic) AWEDiscoverCategoryRecordImageModel wordsImage;
- (id)wordsImage;
- (void)setWordsImage:;
- (void)setWordContent:;
- (id)wordContent;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setWordID:;
- (id)wordID;
- (BOOL)isTracked;
- (void)setIsTracked:;
- (id)wordPosition;
- (void)setWordPosition:;
+ (id)wordsImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
