@interface PHImageCacheEntry : NSObject
@property (nonatomic) NSInteger imageRequestIDForPopulatingCache;
@property (nonatomic) NSDictionary additionalInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)cancel;
- (void)dealloc;
- (BOOL)isCancelled;
- (void)populateWithImageRef:additionalInfo:error:executeBeforeNotifyingWaitersBlock:;
- (BOOL)hasImageRef;
- (id)additionalInfo;
- (void)prepareForReuse;
- (void)addNotifyHandler:;
- (int)imageRequestIDForPopulatingCache;
- (void)_callWaiters:wasCancelled:;
- (id)createImageRef;
- (void).cxx_destruct;
- (void)setImageRequestIDForPopulatingCache:;
@end
