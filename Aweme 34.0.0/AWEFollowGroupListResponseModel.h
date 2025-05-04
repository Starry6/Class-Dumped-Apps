@interface AWEFollowGroupListResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray groupsArray;
@property (nonatomic) NSArray belongGroups;
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSNumber hasMore;
@property (nonatomic) NSNumber total;
@property (nonatomic) NSNumber limit;
- (id)belongGroups;
- (void)setGroupsArray:;
- (void)setBelongGroups:;
- (id)cursor;
- (id)limit;
- (void)setLimit:;
- (void)setHasMore:;
- (id)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
- (id)groupsArray;
+ (id)groupsArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
