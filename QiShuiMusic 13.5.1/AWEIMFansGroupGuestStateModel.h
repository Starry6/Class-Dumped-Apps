@interface AWEIMFansGroupGuestStateModel : IESIMBaseApiModel
@property (nonatomic) NSArray groupList;
- (id)groupList;
- (void)setGroupList:;
- (void).cxx_destruct;
+ (id)groupListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
