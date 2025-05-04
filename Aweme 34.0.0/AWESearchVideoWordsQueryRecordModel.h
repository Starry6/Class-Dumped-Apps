@interface AWESearchVideoWordsQueryRecordModel : AWEBaseApiModel
@property (nonatomic) NSString info;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) NSString queryID;
- (id)wordsSource;
- (void)setWordsSource:;
- (void)setInfo:;
- (id)info;
- (void)setQueryID:;
- (id)queryID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
