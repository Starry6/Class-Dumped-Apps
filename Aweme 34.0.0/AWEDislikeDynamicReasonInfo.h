@interface AWEDislikeDynamicReasonInfo : AWEBaseApiModel
@property (nonatomic) NSString buttonType;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel iconURL;
@property (nonatomic) NSString clientAnchorExtra;
@property (nonatomic) NSString serverAnchorExtra;
@property (nonatomic) BOOL showSep;
@property (nonatomic) NSString defaultImageName;
@property (nonatomic) Q selectedType;
- (id)clientAnchorExtra;
- (void)setClientAnchorExtra:;
- (id)serverAnchorExtra;
- (void)setServerAnchorExtra:;
- (BOOL)showSep;
- (void)setShowSep:;
- (void)setSelectedType:;
- (id)buttonType;
- (void)setIconURL:;
- (id)iconURL;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setButtonType:;
- (unsigned long long)selectedType;
- (id)defaultImageName;
- (void)setDefaultImageName:;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
