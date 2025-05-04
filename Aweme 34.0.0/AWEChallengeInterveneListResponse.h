@interface AWEChallengeInterveneListResponse : AWEBaseApiModel
@property (nonatomic) NSArray models;
@property (nonatomic) BOOL showHistoryTags;
@property (nonatomic) BOOL fillHistoryTagsEnd;
@property (nonatomic) BOOL showPrivacyHistoryTags;
@property (nonatomic) q showPrivacyCount;
- (BOOL)showHistoryTags;
- (void)setShowHistoryTags:;
- (BOOL)fillHistoryTagsEnd;
- (void)setFillHistoryTagsEnd:;
- (BOOL)showPrivacyHistoryTags;
- (void)setShowPrivacyHistoryTags:;
- (long long)showPrivacyCount;
- (void)setShowPrivacyCount:;
- (void)setModels:;
- (void).cxx_destruct;
- (id)models;
+ (id)modelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
