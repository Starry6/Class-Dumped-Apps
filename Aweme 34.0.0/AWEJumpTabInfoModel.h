@interface AWEJumpTabInfoModel : AWEBaseApiModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString jumpConfirmTitle;
@property (nonatomic) Q style;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString jumpURL;
@property (nonatomic) NSString clientExtra;
- (id)jumpURL;
- (void)setJumpURL:;
- (id)clientExtra;
- (void)setClientExtra:;
- (void)setTabID:;
- (id)jumpConfirmTitle;
- (void)setJumpConfirmTitle:;
- (void)setIconURL:;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (unsigned long long)style;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (void)setStyle:;
- (id)tabID;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
