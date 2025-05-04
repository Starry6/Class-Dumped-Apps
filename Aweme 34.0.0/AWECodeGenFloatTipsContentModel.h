@interface AWECodeGenFloatTipsContentModel : AWEBaseDataModel
@property (nonatomic) NSString desc;
@property (nonatomic) NSString subDesc;
@property (nonatomic) NSString img;
@property (nonatomic) NSString video;
@property (nonatomic) NSString poster;
- (id)subDesc;
- (void)setImg:;
- (void)setSubDesc:;
- (id)video;
- (void)setVideo:;
- (void)setDesc:;
- (id)poster;
- (id)desc;
- (void).cxx_destruct;
- (void)setPoster:;
- (id)img;
+ (id)JSONKeyPathsByPropertyKey;
@end
