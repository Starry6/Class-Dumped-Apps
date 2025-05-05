@interface SFRankingFeedback : SFFeedback
@property (nonatomic) double blendingDuration;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSString l2ModelVersion;
@property (nonatomic) NSString l3ModelVersion;
@property (nonatomic) NSString l2ShadowModelVersion;
- (id)sections;
- (void)setL3ModelVersion:;
- (id)initWithCoder:;
- (id)l2ShadowModelVersion;
- (void)encodeWithCoder:;
- (void)setBlendingDuration:;
- (void)setL2ModelVersion:;
- (id)l2ModelVersion;
- (void).cxx_destruct;
- (void)setSections:;
- (void)setL2ShadowModelVersion:;
- (id)initWithSections:blendingDuration:;
- (double)blendingDuration;
- (id)l3ModelVersion;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
