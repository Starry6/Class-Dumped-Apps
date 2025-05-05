@interface SignpostContextFrameLifetime : SignpostAnimationSubInterval
@property (nonatomic) I frameSeed;
@property (nonatomic) SignpostFrameLifetimeInterval parentFrameLifetime;
@property (nonatomic) SignpostContextInfo contextInfo;
@property (nonatomic) <SignpostSupportTimeInterval> contextGlitchInterval;
- (void).cxx_destruct;
- (id)contextInfo;
- (unsigned int)frameSeed;
- (id)initWithFrameLifetime:contextInfo:;
- (id)contextGlitchInterval;
- (id)parentFrameLifetime;
@end
