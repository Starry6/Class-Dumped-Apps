@interface MOVStreamEncoderConfig : NSObject
@property (nonatomic) I codecType;
@property (nonatomic) NSDictionary encoderSpecification;
@property (nonatomic) NSDictionary sessionProperties;
- (id)initWithContentsOfFile:error:;
- (id)sessionProperties;
- (void).cxx_destruct;
- (void)setSessionProperties:;
- (BOOL)writeToFile:error:;
- (unsigned int)codecType;
- (void)setCodecType:;
- (id)initWithCodecType:encoderSpecification:sessionProperties:;
- (id)encoderSpecification;
- (void)setEncoderSpecification:;
- (BOOL)applySessionProperties:;
+ (BOOL)isEncoderAvailableOfType:withId:;
+ (id)encoderIdsForType:;
+ (id)monochrome10BitEncoderConfigUsingAVEWithQuality:;
+ (id)monochrome10BitEncoderConfigUsingAVEWithBitrate:;
+ (id)supportedProfileLevelsForHEVC;
@end
