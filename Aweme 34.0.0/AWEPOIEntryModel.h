@interface AWEPOIEntryModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel iconUrl;
@property (nonatomic) NSNumber classCode;
@property (nonatomic) NSString entryName;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)entryName;
- (void).cxx_destruct;
- (void)setEntryName:;
- (id)classCode;
- (void)setClassCode:;
+ (id)iconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
