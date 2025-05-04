@interface AWEMusicStreamingImpl.FeedRelatedItem : NSObject
@property (nonatomic) NSString itemId;
@property (nonatomic) NSString itemType;
- (id)toDic;
- (id)initWithItemId:itemType:;
- (id)itemType;
- (void)setItemType:;
- (id)init;
- (void).cxx_destruct;
- (id)itemId;
- (void)setItemId:;
@end
