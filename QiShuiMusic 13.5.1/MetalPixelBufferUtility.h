@interface MetalPixelBufferUtility : NSObject
@property (nonatomic) BOOL enabled;
- (id)init;
- (BOOL)enabled;
- (void)setEnabled:;
- (void).cxx_destruct;
- (BOOL)joinYUVBuffer:intoRawBayerPixelBuffer:shiftBitsLeftBy:msbReplication:;
- (BOOL)splitBayerBuffer:intoYUVPixelBuffer:shiftBitsLeftBy:;
- (BOOL)splitBayerBuffer:intoWarholPixelBuffer:shiftBitsLeftBy:;
- (BOOL)joinWarholBuffer:intoBayerBuffer:shiftBitsRightBy:msbReplication:;
- (BOOL)splitCompandedBayerBuffer:intoCompandedWarholPixelBuffer:;
- (BOOL)joinCompandedWarholBuffer:intoCompandedBayerBuffer:;
- (BOOL)processBayerBuffer:withWarholBuffer:shiftCount:msbReplication:operation:sampleSize:;
+ (id)sharedMetalPixelBufferUtility;
@end
