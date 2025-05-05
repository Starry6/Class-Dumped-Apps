@interface IESIMMusicMVVideoSegInfo : MTLModel
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
- (double)cropRatio;
- (id)fragmentID;
- (void)setCropRatio:;
- (void)setFragmentID:;
- (void)setSourceDuration:;
- (double)sourceDuration;
- (void)setGroupID:;
- (long long)groupID;
- (void)setStartTime:;
- (void)setEndTime:;
- (double)startTime;
- (double)endTime;
- (void).cxx_destruct;
- (id)materialType;
- (void)setMaterialType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
