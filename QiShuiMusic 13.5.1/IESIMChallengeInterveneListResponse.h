@interface IESIMChallengeInterveneListResponse : IESIMBaseApiModel
@property (nonatomic) NSArray models;
@property (nonatomic) BOOL showHistoryTags;
@property (nonatomic) BOOL fillHistoryTagsEnd;
@property (nonatomic) BOOL showPrivacyHistoryTags;
@property (nonatomic) q showPrivacyCount;
- (BOOL)showHistoryTags;
- (BOOL)fillHistoryTagsEnd;
- (void)setFillHistoryTagsEnd:;
- (void)setShowHistoryTags:;
- (void)setShowPrivacyCount:;
- (void)setShowPrivacyHistoryTags:;
- (long long)showPrivacyCount;
- (BOOL)showPrivacyHistoryTags;
- (void)setModels:;
- (id)models;
- (void).cxx_destruct;
+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
