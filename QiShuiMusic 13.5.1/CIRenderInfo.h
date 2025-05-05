@interface CIRenderInfo : NSObject
@property (nonatomic) double kernelExecutionTime;
@property (nonatomic) q passCount;
@property (nonatomic) q pixelsProcessed;
- (id)init;
- (void)dealloc;
- (id)_pdfDataRepresentation;
- (id)description;
- (long long)passCount;
- (id)initWithCompletedTask:;
- (double)kernelExecutionTime;
- (long long)kernelExecutionCycles;
- (long long)pixelsProcessed;
- (long long)pixelsOverdrawn;
+ (id)renderInfoWithCompletedTask:;
@end
