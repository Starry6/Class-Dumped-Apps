@interface AXMModelDetectorNode : AXMEvaluationNode
@property (nonatomic) NSURL modelURL;
@property (nonatomic) NSString modelIdentifier;
- (id)initWithCoder:;
- (id)modelIdentifier;
- (void)encodeWithCoder:;
- (id)modelURL;
- (void)setModelURL:;
- (void).cxx_destruct;
- (void)nodeInitialize;
- (void)evaluate:metrics:;
- (BOOL)requiresVisionFramework;
- (BOOL)preloadModelIfNeeded:;
- (BOOL)_loadModel:;
+ (BOOL)isSupported;
+ (BOOL)supportsSecureCoding;
+ (id)title;
@end
