@interface IESIMGeneralHotSpotRelatedUserModel : IESIMBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) q cardStyle;
@property (nonatomic) NSString sentenceId;
@property (nonatomic) NSString keyword;
- (id)sentenceId;
- (void)setSentenceId:;
- (void)setUserList:;
- (void).cxx_destruct;
- (id)userList;
- (void)setKeyword:;
- (id)keyword;
- (long long)cardStyle;
- (void)setCardStyle:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
