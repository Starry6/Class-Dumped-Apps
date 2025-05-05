@interface ATSpatialStreamDescriptions : NSObject
@property (nonatomic) q type;
@property (nonatomic) AVAudioFormat flatFormat;
@property (nonatomic) AVAudioFormat streamFormat;
@property (nonatomic) NSArray streamParameters;
- (id)init;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFlatIOFormat:type:;
- (id)streamParameters;
- (id)flatFormat;
- (id)streamFormat;
@end
