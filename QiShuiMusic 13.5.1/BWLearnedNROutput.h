@interface BWLearnedNROutput : NSObject
@property (nonatomic) ^{__CVBuffer=} pixelBuffer;
@property (nonatomic) NSMutableDictionary metadata;
- (void)dealloc;
- (id)pixelBuffer;
- (id)metadata;
- (void)setMetadata:;
- (void)setPixelBuffer:;
@end
