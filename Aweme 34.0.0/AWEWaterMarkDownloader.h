@interface AWEWaterMarkDownloader : NSObject
+ (void)startDownloadWithTaskId:effectId:imageURLString:completion:;
+ (id)imagePathWithTaskId:effectId:;
@end
