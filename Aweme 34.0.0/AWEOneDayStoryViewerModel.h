@interface AWEOneDayStoryViewerModel : AWEBaseApiModel
@property (nonatomic) NSNumber total;
@property (nonatomic) NSArray userList;
- (id)userList;
- (void)setUserList:;
- (void).cxx_destruct;
- (id)total;
- (void)setTotal:;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
