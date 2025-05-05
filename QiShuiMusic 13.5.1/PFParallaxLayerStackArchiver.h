@interface PFParallaxLayerStackArchiver : NSObject
+ (BOOL)saveLayerStack:toURL:options:error:;
+ (id)loadLayerStackFromURL:options:error:;
@end
