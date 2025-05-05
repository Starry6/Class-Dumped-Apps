@interface CJPayQuickPayUserAgreement : JSONModel
@property (nonatomic) NSString contentURL;
@property (nonatomic) BOOL defaultChoose;
@property (nonatomic) NSString title;
- (BOOL)defaultChoose;
- (void)setDefaultChoose:;
- (void)setTitle:;
- (id)contentURL;
- (id)title;
- (void).cxx_destruct;
- (void)setContentURL:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
