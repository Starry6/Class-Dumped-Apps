@interface HMDMetrickitConfig : HMDTrackerConfig
@property (nonatomic) BOOL isUploadMetric;
@property (nonatomic) BOOL isFixSegmentRename;
- (id)getModule;
- (BOOL)isFixSegmentRename;
- (BOOL)isUploadMetric;
- (void)setIsFixSegmentRename:;
- (void)setIsUploadMetric:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
