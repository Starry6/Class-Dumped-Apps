@interface HMDCrashAddressAnalysis : HMDCrashModel
@property (nonatomic) Q value;
@property (nonatomic) HMDCrashBinaryImage image;
@property (nonatomic) HMDCrashSegment segment;
@property (nonatomic) HMDCrashSection section;
@property (nonatomic) HMDCrashVMRegion regionInfo;
@property (nonatomic) HMDCrashAddressObjectInfo objectInfo;
@property (nonatomic) NSString stringInfo;
- (id)objectInfo;
- (id)postDict;
- (void)setObjectInfo:;
- (void)setStringInfo:;
- (id)stringInfo;
- (void)updateWithDictionary:;
- (void)setImage:;
- (void)setSection:;
- (id)regionInfo;
- (void)setValue:;
- (void).cxx_destruct;
- (id)segment;
- (unsigned long long)value;
- (void)setSegment:;
- (id)section;
- (id)image;
- (void)setRegionInfo:;
@end
