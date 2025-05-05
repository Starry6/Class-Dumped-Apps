@interface EspressoDataFrameImageAttachment : EspressoDataFrameAttachment
@property (nonatomic) NSInteger nChannels;
- (void)loadFromDict:frameStorage:;
- (id)copyAsImageGrayscaleOrBGRA;
- (int)nChannels;
- (void)setNChannels:;
+ (id)createCVPixelBufferFromvImage:withPixelFormat:;
@end
