@interface IESIMSearchRelatedWordModel : IESIMBaseApiModel
@property (nonatomic) NSString relatedWord;
@property (nonatomic) IESIMSearchRelatedVideoWordRecordModel wordRecord;
@property (nonatomic) NSString relatedImageURL;
@property (nonatomic) q randNum;
- (long long)randNum;
- (void)setRelatedWord:;
- (id)relatedImageURL;
- (id)relatedWord;
- (void)setRandNum:;
- (void)setRelatedImageURL:;
- (void)setWordRecord:;
- (id)wordRecord;
- (void).cxx_destruct;
+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
