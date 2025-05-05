@interface WFImageCache : NSObject
@property (nonatomic) NSMutableDictionary backingStore;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (id)init;
- (id)backingStore;
- (void)removeAllObjects;
- (id)lock;
- (void).cxx_destruct;
- (id)imageForKey:;
- (void)setImage:forKey:;
@end
