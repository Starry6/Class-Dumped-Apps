@interface AWESearchEpidemicLiveModel : AWEBaseApiModel
@property (nonatomic) NSString titleText;
@property (nonatomic) NSString liveText;
@property (nonatomic) NSString liveIconStartColor;
@property (nonatomic) NSString liveIconEndColor;
@property (nonatomic) NSString schemaURL;
- (void)setSchemaURL:;
- (id)schemaURL;
- (void)setLiveText:;
- (id)liveIconStartColor;
- (void)setLiveIconStartColor:;
- (id)liveIconEndColor;
- (void)setLiveIconEndColor:;
- (void)setTitleText:;
- (id)titleText;
- (void).cxx_destruct;
- (id)liveText;
+ (id)JSONKeyPathsByPropertyKey;
@end
