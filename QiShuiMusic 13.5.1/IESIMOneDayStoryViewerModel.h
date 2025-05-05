@interface IESIMOneDayStoryViewerModel : IESIMBaseApiModel
@property (nonatomic) NSNumber total;
@property (nonatomic) NSArray userList;
- (void)setUserList:;
- (void).cxx_destruct;
- (id)total;
- (id)userList;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
