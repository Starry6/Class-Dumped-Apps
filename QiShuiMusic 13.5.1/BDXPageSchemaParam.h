@interface BDXPageSchemaParam : BDXSchemaParam
@property (nonatomic) BDXPageModel pageModel;
- (id)pageModel;
- (void)setPageModel:;
- (void)updateWithSchemaData:;
- (void).cxx_destruct;
+ (id)paramWithSchemaData:;
@end
