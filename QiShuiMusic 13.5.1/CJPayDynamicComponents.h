@interface CJPayDynamicComponents : JSONModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString url;
@property (nonatomic) NSString schema;
- (id)schema;
- (id)url;
- (void)setName:;
- (void)setUrl:;
- (void)setSchema:;
- (void).cxx_destruct;
- (id)name;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
