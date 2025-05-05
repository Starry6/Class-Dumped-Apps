@interface SFCacheEntry : NSObject
@property (nonatomic) NSObject item;
@property (nonatomic) NSDate lastUsed;
- (id)item;
- (id)lastUsed;
- (void)setItem:;
- (void).cxx_destruct;
- (void)setLastUsed:;
- (id)initWithCacheItem:;
@end
