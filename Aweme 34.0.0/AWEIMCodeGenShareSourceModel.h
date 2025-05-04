@interface AWEIMCodeGenShareSourceModel : AWEBaseDataModel
@property (nonatomic) NSString key;
@property (nonatomic) NSArray membersModelArray;
@property (nonatomic) BOOL abnormal;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)membersModelArray;
- (BOOL)abnormal;
- (void)setMembersModelArray:;
- (void)setAbnormal:;
- (void)setKey:;
- (id)extra;
- (id)key;
- (void).cxx_destruct;
+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;
@end
