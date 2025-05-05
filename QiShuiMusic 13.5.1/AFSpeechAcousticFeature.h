@interface AFSpeechAcousticFeature : NSObject
@property (nonatomic) NSArray acousticFeatureValuePerFrame;
@property (nonatomic) double frameDuration;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (double)frameDuration;
- (id)initWithAcousticFeatureValue:frameDuration:;
- (id)acousticFeatureValuePerFrame;
+ (BOOL)supportsSecureCoding;
@end
