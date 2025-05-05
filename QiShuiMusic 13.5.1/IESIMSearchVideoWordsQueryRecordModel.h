@interface IESIMSearchVideoWordsQueryRecordModel : IESIMBaseApiModel
@property (nonatomic) NSString info;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) NSString queryID;
- (void)setWordsSource:;
- (id)wordsSource;
- (id)queryID;
- (void)setInfo:;
- (void)setQueryID:;
- (void).cxx_destruct;
- (id)info;
+ (id)JSONKeyPathsByPropertyKey;
@end
