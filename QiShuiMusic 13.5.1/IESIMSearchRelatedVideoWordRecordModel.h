@interface IESIMSearchRelatedVideoWordRecordModel : IESIMBaseApiModel
@property (nonatomic) NSString groupID;
@property (nonatomic) q wordsPosition;
@property (nonatomic) NSString wordsContent;
@property (nonatomic) NSString wordsSource;
- (void)setWordsSource:;
- (void)setWordsContent:;
- (void)setWordsPosition:;
- (id)wordsContent;
- (long long)wordsPosition;
- (id)wordsSource;
- (void)setGroupID:;
- (id)groupID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
