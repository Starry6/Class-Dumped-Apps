@interface IESIMRelationLabel : IESIMBaseApiModel
@property (nonatomic) q labelType;
@property (nonatomic) NSArray userList;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (void)setUserList:;
- (id)extra;
- (void)setLabelType:;
- (long long)labelType;
- (void).cxx_destruct;
- (id)userList;
+ (id)labelTypeJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
