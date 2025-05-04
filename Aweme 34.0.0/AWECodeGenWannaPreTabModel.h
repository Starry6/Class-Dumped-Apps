@interface AWECodeGenWannaPreTabModel : AWEBaseDataModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) NSString cover;
@property (nonatomic) NSString button;
@property (nonatomic) NSString cancelButton;
- (id)cover;
- (void)setCover:;
- (void)setCancelButton:;
- (void)setButton:;
- (void)setSubTitle:;
- (id)subTitle;
- (id)cancelButton;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)button;
+ (id)JSONKeyPathsByPropertyKey;
@end
