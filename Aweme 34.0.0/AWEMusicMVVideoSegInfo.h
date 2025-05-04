@interface AWEMusicMVVideoSegInfo : MTLModel
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) NSString fragmentID;
@property (nonatomic) double cropRatio;
@property (nonatomic) NSString materialType;
@property (nonatomic) double sourceDuration;
@property (nonatomic) q groupID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCropRatio:;
- (void)setSourceDuration:;
- (double)cropRatio;
- (double)sourceDuration;
- (id)fragmentID;
- (void)setFragmentID:;
- (void)setGroupID:;
- (void)setStartTime:;
- (double)endTime;
- (long long)groupID;
- (void)setEndTime:;
- (void).cxx_destruct;
- (double)startTime;
- (id)materialType;
- (void)setMaterialType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
