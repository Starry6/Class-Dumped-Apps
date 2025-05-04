@interface AWESearchRelatedWordModel : AWEBaseApiModel
@property (nonatomic) NSString relatedWord;
@property (nonatomic) AWESearchRelatedVideoWordRecordModel wordRecord;
@property (nonatomic) NSString relatedImageURL;
@property (nonatomic) q randNum;
@property (nonatomic) AWESearchRelatedExtraInfoModel extraInfo;
@property (nonatomic) BOOL display;
- (id)relatedWord;
- (void)setRelatedWord:;
- (id)wordRecord;
- (void)setWordRecord:;
- (id)relatedImageURL;
- (void)setRelatedImageURL:;
- (long long)randNum;
- (void)setRandNum:;
- (void)setDisplay:;
- (void).cxx_destruct;
- (BOOL)display;
- (id)extraInfo;
- (void)setExtraInfo:;
+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
