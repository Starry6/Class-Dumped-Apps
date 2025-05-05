@interface CVNLPCaptionEncoder : CVNLPCaptionModelBase
- (void)computeCaptionForImage:outputs:;
- (void)computeCaptionForPixelBuffer:outputs:;
- (unsigned long long)_blob_size:;
- (void)_fill_blob_data:with:;
@end
