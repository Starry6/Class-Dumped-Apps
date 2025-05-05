@interface IESLiveItemShareItemCellViewModel : NSObject
@property (nonatomic) ItemShareListResponse_ItemInfo itemInfo;
@property (nonatomic) NSString itemType;
@property (nonatomic) BOOL firstItem;
@property (nonatomic) BOOL lastItem;
@property (nonatomic) BOOL hasTrackShow;
- (BOOL)hasTrackShow;
- (void)setHasTrackShow:;
- (void)setItemInfo:;
- (void)setItemType:;
- (id)itemType;
- (void).cxx_destruct;
- (id)itemInfo;
- (BOOL)firstItem;
- (BOOL)lastItem;
- (void)setFirstItem:;
- (void)setLastItem:;
@end
