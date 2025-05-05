@interface AVPlayerQueueModificationDescription : NSObject
@property (nonatomic) q modificationType;
@property (nonatomic) AVPlayerItem item;
@property (nonatomic) AVPlayerItem afterItem;
- (id)item;
- (id)init;
- (void)dealloc;
- (id)initWithModificationType:item:afterItem:;
- (id)afterItem;
- (long long)modificationType;
+ (id)modificationForRemovingItem:;
+ (id)modificationForInsertingItem:afterItem:;
@end
