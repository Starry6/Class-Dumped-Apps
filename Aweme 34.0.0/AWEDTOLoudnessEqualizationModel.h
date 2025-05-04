@interface AWEDTOLoudnessEqualizationModel : MTLModel
@property (nonatomic) double sourceLufs;
@property (nonatomic) double sourcePeak;
@property (nonatomic) double targetLufs;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)sourceLufs;
- (void)setSourceLufs:;
- (double)sourcePeak;
- (void)setSourcePeak:;
- (double)targetLufs;
- (void)setTargetLufs:;
+ (id)JSONKeyPathsByPropertyKey;
@end
