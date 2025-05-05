@interface CMProxPDP : NSObject
@property (nonatomic) NSNumber timestamp;
@property (nonatomic) NSNumber intensity;
@property (nonatomic) NSNumber intensityCalDelta;
@property (nonatomic) NSNumber intensityBaselineDelta;
@property (nonatomic) NSNumber ambient;
@property (nonatomic) NSNumber pocketProbability;
@property (nonatomic) NSNumber baselineConfidence;
@property (nonatomic) NSNumber rxNtcC;
@property (nonatomic) NSNumber scanFlags;
@property (nonatomic) NSNumber pocketFlag;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)scanFlags;
- (id)intensity;
- (id)timestamp;
- (id)description;
- (id)copyWithZone:;
- (id)pocketProbability;
- (id)initWithTimestamp:intensity:intensityCalDelta:intensityBaselineDelta:ambient:pocketProbability:baselineConfidence:rxNtcC:scanFlags:pocketFlag:;
- (id)intensityCalDelta;
- (id)intensityBaselineDelta;
- (id)ambient;
- (id)baselineConfidence;
- (id)rxNtcC;
- (id)pocketFlag;
+ (BOOL)supportsSecureCoding;
@end
