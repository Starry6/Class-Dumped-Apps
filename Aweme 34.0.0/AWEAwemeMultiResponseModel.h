@interface AWEAwemeMultiResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSArray filteredModels;
@property (nonatomic) NSArray emojiList;
@property (nonatomic) NSArray verificationFilterList;
- (id)awemeList;
- (id)filteredModels;
- (void)setAwemeList:;
- (void)setFilteredModels:;
- (void)setEmojiList:;
- (id)verificationFilterList;
- (void)setVerificationFilterList:;
- (void).cxx_destruct;
- (id)emojiList;
+ (id)awemeListJSONTransformer;
+ (id)filteredModelsJSONTransformer;
+ (id)verificationFilterListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
