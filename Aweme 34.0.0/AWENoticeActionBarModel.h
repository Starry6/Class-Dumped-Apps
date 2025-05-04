@interface AWENoticeActionBarModel : AWEBaseApiModel
@property (nonatomic) q actionBarType;
@property (nonatomic) NSString text;
@property (nonatomic) NSString schema;
@property (nonatomic) AWENoticeActionBarThemeColorModel backgroundColorModel;
@property (nonatomic) AWENoticeActionBarThemeColorModel textColorModel;
@property (nonatomic) AWENoticeActionBarIconURLModel icon;
@property (nonatomic) NSDictionary extraDict;
- (id)extraDict;
- (void)setExtraDict:;
- (long long)actionBarType;
- (id)backgroundColorModel;
- (id)textColorModel;
- (void)setActionBarType:;
- (void)setBackgroundColorModel:;
- (void)setTextColorModel:;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setText:;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
+ (id)iconJSONTransformer;
+ (id)backgroundColorModelJSONTransformer;
+ (id)textColorModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
