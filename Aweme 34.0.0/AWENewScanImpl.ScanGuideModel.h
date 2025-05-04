@interface AWENewScanImpl.ScanGuideModel : AWEBaseApiModel
@property (nonatomic) AWEURLModel icon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSArray targetIDs;
- (id)targetIDs;
- (void)setTargetIDs:;
- (id)iconJSONTransformer;
- (id)initWithDictionary:error:;
- (id)init;
- (id)icon;
- (void)setDesc:;
- (id)desc;
- (void)setIcon:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
