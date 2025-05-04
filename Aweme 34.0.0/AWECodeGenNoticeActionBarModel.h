@interface AWECodeGenNoticeActionBarModel : AWEBaseDataModel
@property (nonatomic) q actionBarType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) AWECodeGenThemeColorModel backgroundColorModel;
@property (nonatomic) AWECodeGenThemeColorModel textColorModel;
@property (nonatomic) AWECodeGenIconUrlModel iconModel;
@property (nonatomic) NSDictionary extraMap;
- (long long)actionBarType;
- (id)backgroundColorModel;
- (id)textColorModel;
- (id)extraMap;
- (void)setExtraMap:;
- (void)setActionBarType:;
- (void)setBackgroundColorModel:;
- (void)setTextColorModel:;
- (id)schema;
- (void)setSchema:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (void)setIconModel:;
- (id)iconModel;
+ (id)JSONKeyPathsByPropertyKey;
@end
