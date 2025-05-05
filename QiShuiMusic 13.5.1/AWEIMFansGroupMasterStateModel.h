@interface AWEIMFansGroupMasterStateModel : IESIMBaseApiModel
@property (nonatomic) NSArray groupList;
@property (nonatomic) AWEIMFansGroupBannerModel bannerModel;
@property (nonatomic) BOOL hasFansGroup;
@property (nonatomic) AWEIMFansGroupIntroduceModel introduceModel;
@property (nonatomic) q nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q showCountLimit;
- (void)setBannerModel:;
- (id)bannerModel;
- (BOOL)hasFansGroup;
- (id)introduceModel;
- (long long)nextCursor;
- (void)setHasFansGroup:;
- (void)setIntroduceModel:;
- (void)setNextCursor:;
- (void)setShowCountLimit:;
- (long long)showCountLimit;
- (id)groupList;
- (void)setHasMore:;
- (void)setGroupList:;
- (void).cxx_destruct;
- (BOOL)hasMore;
+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
