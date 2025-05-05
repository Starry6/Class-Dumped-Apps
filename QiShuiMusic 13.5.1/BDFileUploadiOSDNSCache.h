@interface BDFileUploadiOSDNSCache : NSObject
@property (nonatomic) NSMutableDictionary items;
- (void)_appDidReceiveMemoryWarningNotification;
- (void)_appWillEnterForegroundNotification;
- (void)_tryToClearExpiredItems;
- (id)getIpUsingRR:;
- (id)getItemInfo:;
- (void)setItem:host:;
- (void)removeItem:;
- (id)init;
- (void)dealloc;
- (id)items;
- (void)setItems:;
- (void).cxx_destruct;
- (void)clearAllItems;
+ (id)shareCache;
@end
