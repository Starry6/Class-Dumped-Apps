@interface AWESearchRelatedVideoWordRecordModel : AWEBaseApiModel
@property (nonatomic) NSString groupID;
@property (nonatomic) q wordsPosition;
@property (nonatomic) NSString wordsContent;
@property (nonatomic) NSString wordsSource;
@property (nonatomic) AWEURLModel wordsImage;
@property (nonatomic) BOOL forceUpdateRank;
@property (nonatomic) NSString productID;
- (id)wordsImage;
- (void)setWordsImage:;
- (long long)wordsPosition;
- (void)setWordsPosition:;
- (id)wordsContent;
- (void)setWordsContent:;
- (id)wordsSource;
- (BOOL)forceUpdateRank;
- (void)setForceUpdateRank:;
- (void)setWordsSource:;
- (void)setGroupID:;
- (void)setProductID:;
- (id)productID;
- (id)groupID;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
