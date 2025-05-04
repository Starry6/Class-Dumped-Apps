@interface AWERelationLabel : AWEBaseApiModel
@property (nonatomic) q labelType;
@property (nonatomic) NSArray userList;
@property (nonatomic) NSString extra;
- (void)setExtra:;
- (id)userList;
- (void)setUserList:;
- (long long)labelType;
- (void)setLabelType:;
- (id)extra;
- (void).cxx_destruct;
+ (id)labelTypeJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
