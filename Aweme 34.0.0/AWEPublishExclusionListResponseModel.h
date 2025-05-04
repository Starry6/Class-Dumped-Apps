@interface AWEPublishExclusionListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray exclusionList;
@property (nonatomic) q totalCount;
@property (nonatomic) NSArray secUserList;
- (id)exclusionList;
- (id)secUserList;
- (void)setSecUserList:;
- (void)setExclusionList:;
- (long long)totalCount;
- (void).cxx_destruct;
- (void)setTotalCount:;
+ (id)exclusionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
