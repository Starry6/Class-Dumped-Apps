@interface AWEVCDAlertModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel barIconUrl;
@property (nonatomic) NSString barTitle;
@property (nonatomic) NSString barText;
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSArray agreementArray;
- (id)barTitle;
- (id)barText;
- (void)setBarTitle:;
- (id)barIconUrl;
- (void)setBarIconUrl:;
- (void)setBarText:;
- (id)agreementArray;
- (void)setAgreementArray:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)barIconUrlJSONTransformer;
+ (id)agreementArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
