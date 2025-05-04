@interface AWEGeneralHotSpotRelatedUserModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) q cardStyle;
@property (nonatomic) NSString sentenceId;
@property (nonatomic) NSString keyword;
@property (nonatomic) NSString title;
- (id)userList;
- (id)sentenceId;
- (void)setSentenceId:;
- (void)setUserList:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)keyword;
- (void)setKeyword:;
- (long long)cardStyle;
- (void)setCardStyle:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
