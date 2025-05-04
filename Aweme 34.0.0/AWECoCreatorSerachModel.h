@interface AWECoCreatorSerachModel : AWEBaseApiModel
@property (nonatomic) NSArray userList;
@property (nonatomic) AWECoCreatorSerachExtraModel extra;
- (void)setExtra:;
- (id)userList;
- (void)setUserList:;
- (id)extra;
- (void).cxx_destruct;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
