@interface VCPixelBufferOverlay : VCObject
@property (nonatomic) {VCInfoDetails=Bff{CGSize=dd}^{__CFDictionary}q@{VCOverlayAudioInfo=iiii}{VCOverlayVideoInfo=iiiiii}} currentDetails;
- (id)init;
- (void)dealloc;
- (void)updateOverlayWithPixelBuffer:;
- (void)drawOverlayMessage:onPixelBuffer:attributes:;
- (id)reverseString:;
- (id)currentDetails;
- (void)setCurrentDetails:;
@end
