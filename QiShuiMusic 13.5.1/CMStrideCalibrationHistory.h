@interface CMStrideCalibrationHistory : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray calibrationTracks;
@property (nonatomic) NSArray rawSpeedToKValueBins;
@property (nonatomic) NSArray stepCadenceToStrideLengthBins;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)initWithBinarySampleRepresentation:metadata:timestamp:;
- (id)binarySampleRepresentation;
- (id)initWithCalibrationTracks:rawSpeedToKValueBins:stepCadenceToStrideLengthBins:;
- (id)calibrationTracks;
- (void)setCalibrationTracks:;
- (id)rawSpeedToKValueBins;
- (void)setRawSpeedToKValueBins:;
- (id)stepCadenceToStrideLengthBins;
- (void)setStepCadenceToStrideLengthBins:;
+ (BOOL)supportsSecureCoding;
@end
