@interface CJPayFEGuideInfoModel : JSONModel
@property (nonatomic) NSString guideType;
@property (nonatomic) NSString url;
- (id)guideType;
- (void)setGuideType:;
- (id)url;
- (void)setUrl:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
