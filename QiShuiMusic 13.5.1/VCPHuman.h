@interface VCPHuman : NSObject
@property (nonatomic) Q flags;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} bounds;
@property (nonatomic) float confidence;
@property (nonatomic) VNTorsoprint torsoprint;
- (float)confidence;
- (id)init;
- (void)setConfidence:;
- (void)setBounds:;
- (void).cxx_destruct;
- (void)setFlags:;
- (id)bounds;
- (unsigned long long)flags;
- (id)torsoprint;
- (void)setTorsoprint:;
+ (unsigned long long)flagsFromKeypoints:withMinConfidence:;
@end
