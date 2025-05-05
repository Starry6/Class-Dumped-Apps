@interface AXMEvaluationNode : AXMVisionEngineNode
@property (nonatomic) Q effectivePriority;
@property (nonatomic) double minimumConfidence;
@property (nonatomic) Q priority;
- (void)setPriority:;
- (id)initWithCoder:;
- (void)setMinimumConfidence:;
- (void)encodeWithCoder:;
- (double)minimumConfidence;
- (unsigned long long)priority;
- (void)nodeInitialize;
- (BOOL)validateVisionKitSoftLinkSymbols;
- (void)evaluate:metrics:;
- (BOOL)shouldEvaluate:;
- (void)boostEffectivePriority;
- (void)resetEffectivePriority;
- (BOOL)evaluateRequests:withContext:requestHandlerOptions:metrics:error:;
- (id)_diagnosticNameForRequests:metrics:;
- (unsigned long long)effectivePriority;
- (void)setEffectivePriority:;
+ (BOOL)supportsSecureCoding;
+ (id)preferredModelInputSize;
+ (BOOL)isANEDeviceAvailable;
+ (void)configureForRunningOnANEIfPossibleWithRequest:;
+ (unsigned long long)defaultPriority;
@end
