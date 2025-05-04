@interface AWEVCDImportFansModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel hotsoonIconURL;
- (id)hotsoonIconURL;
- (void)setHotsoonIconURL:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)hotsoonIconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
