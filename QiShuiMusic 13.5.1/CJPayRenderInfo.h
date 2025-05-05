@interface CJPayRenderInfo : JSONModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString h5Url;
@property (nonatomic) NSString lynxUrl;
- (id)lynxUrl;
- (id)h5Url;
- (void)setH5Url:;
- (void)setLynxUrl:;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
