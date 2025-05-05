@interface SSDownloadPhase : NSObject
@property (nonatomic) SSOperationProgress operationProgress;
@property (nonatomic) q phaseType;
@property (nonatomic) q progressValue;
@property (nonatomic) q totalProgressValue;
@property (nonatomic) q progressUnits;
@property (nonatomic) double estimatedSecondsRemaining;
@property (nonatomic) float progressChangeRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)init;
- (void)dealloc;
- (id)copyXPCEncoding;
- (long long)progressValue;
- (id)copyWithZone:;
- (double)estimatedSecondsRemaining;
- (id)initWithOperationProgress:;
- (long long)phaseType;
- (long long)progressUnits;
- (float)progressChangeRate;
- (long long)totalProgressValue;
- (id)operationProgress;
@end
