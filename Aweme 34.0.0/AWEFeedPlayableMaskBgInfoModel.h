@interface AWEFeedPlayableMaskBgInfoModel : MTLModel
@property (nonatomic) NSArray sectionInfo;
@property (nonatomic) AWEFeedPlayableMaskColorInfoModel successEndInfo;
@property (nonatomic) AWEFeedPlayableMaskColorInfoModel abnormalEndInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)successEndInfo;
- (id)abnormalEndInfo;
- (void)setSuccessEndInfo:;
- (void)setAbnormalEndInfo:;
- (void).cxx_destruct;
- (void)setSectionInfo:;
- (id)sectionInfo;
+ (id)sectionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
