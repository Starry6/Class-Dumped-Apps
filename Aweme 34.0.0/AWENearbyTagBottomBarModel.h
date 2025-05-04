@interface AWENearbyTagBottomBarModel : AWEBaseApiModel
@property (nonatomic) NSString vedioId;
@property (nonatomic) NSString text;
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString schema;
@property (nonatomic) q frequencyLimit;
@property (nonatomic) NSString name;
@property (nonatomic) NSString extra;
@property (nonatomic) NSArray reportValues;
- (void)setExtra:;
- (void)setReportValues:;
- (id)vedioId;
- (void)setVedioId:;
- (long long)frequencyLimit;
- (void)setFrequencyLimit:;
- (id)schema;
- (void)setSchema:;
- (id)icon;
- (void)setText:;
- (id)extra;
- (id)text;
- (void)setIcon:;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)reportValues;
+ (id)JSONKeyPathsByPropertyKey;
@end
