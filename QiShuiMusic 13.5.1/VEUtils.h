@interface VEUtils : NSObject
- (BOOL)isViewInvalid:;
- (id)init;
+ (id)MD5WithNSString:;
+ (id)captureResolutionWithSessionPreset:;
+ (void)clearCacheDiskDir:;
+ (id)convertRecordSpeedToStringFromFloat:;
+ (id)resizeImageWithEffect:scale:error:;
+ (void)setFrameCacheDiskDir:;
+ (void)setPageMode:;
+ (int)webpEncode:destpath:quality:preset:para:;
+ (id)sharedInstance;
@end
