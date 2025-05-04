@interface AWEIMFansGroupGuestStateModel : IESIMBaseApiModel
@property (nonatomic) NSArray groupList;
@property (nonatomic) NSArray recommendedGroupSequence;
- (id)recommendedGroupSequence;
- (void)setRecommendedGroupSequence:;
- (id)groupList;
- (void)setGroupList:;
- (void).cxx_destruct;
+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
