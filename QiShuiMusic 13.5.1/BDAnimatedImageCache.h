@interface BDAnimatedImageCache : NSObject
@property (nonatomic) NSMutableDictionary frameCaches;
- (void)setFrameCaches:;
- (id)frameCaches;
- (id)safeObjectForKey:;
- (id)init;
- (id)cacheLock;
- (void).cxx_destruct;
@end
