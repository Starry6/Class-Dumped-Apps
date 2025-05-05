@interface IESIMGeneralFilmTelevisionTagModel : IESIMBaseApiModel
@property (nonatomic) NSString tagWord;
@property (nonatomic) NSString tagWordColorString;
@property (nonatomic) NSString tagBgImageURL;
- (id)tagWord;
- (void)setTagBgImageURL:;
- (void)setTagWord:;
- (void)setTagWordColorString:;
- (id)tagBgImageURL;
- (id)tagWordColorString;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
