@interface CJPayMemAgreementModel : JSONModel
@property (nonatomic) NSString group;
@property (nonatomic) NSString name;
@property (nonatomic) NSString url;
@property (nonatomic) BOOL isChoose;
- (BOOL)isChoose;
- (void)setIsChoose:;
- (id)toQuickPayUserAgreement;
- (id)url;
- (void)setName:;
- (void)setGroup:;
- (void)setUrl:;
- (id)group;
- (void).cxx_destruct;
- (id)name;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
