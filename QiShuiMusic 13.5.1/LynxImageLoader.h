@interface LynxImageLoader : NSObject
- (id)loadCanvasImageFromURL:contextInfo:processors:imageFetcher:completed:;
- (id)loadImageFromURL:size:contextInfo:processors:imageFetcher:completed:;
+ (id)sharedInstance;
@end
