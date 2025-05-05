@interface RawBayerTo1stPlaneYUVPreProcessor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)processedPixelBufferCopyOf:streamData:error:;
- (id)createTrackFormatDescriptionFromStreamData:;
- (id)formatDescriptionForPixelBuffer:streamData:;
- (unsigned int)inputPixelFormatFromStreamData:;
- (unsigned int)encodedPixelFormatFromStreamData:;
@end
