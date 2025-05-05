@interface BWMotionDataPreserver : NSObject
- (void)dealloc;
- (id)initWithName:;
- (BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:;
- (void)reset;
- (BOOL)prependPreservedMotionDataToSampleBuffer:;
@end
