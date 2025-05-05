@interface MOVStreamFrameConverter : NSObject
@property (nonatomic) BOOL transferSessionUsageDisabled;
- (id)init;
- (void)dealloc;
- (id)initWithTargetWidth:height:format:extendedPixelsPerRow:;
- (id)initWithTargetWidth:height:format:bytesPerRow:;
- (id)initWithTargetWidth:height:format:bytesPerRows:;
- (id)convertPixelBuffer:;
- (BOOL)transferSessionUsageDisabled;
- (void)setTransferSessionUsageDisabled:;
@end
