@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment
- (void)loadFromDict:frameStorage:;
- (id)copyAsEspressoBuffer;
+ (id)copyFromCVPixelBuffer:;
@end
