@interface UIStatusBarCache : NSObject
@property (nonatomic) BOOL writeable;
- (id)init;
- (void).cxx_destruct;
- (id)imageNamed:forGroup:withScale:;
- (void)cacheImage:named:forGroup:;
- (void)removeImagesInGroup:;
- (BOOL)isWriteable;
+ (id)sharedInstance;
@end
