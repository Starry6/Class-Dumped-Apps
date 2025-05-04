@interface AWEIMVmojiQuickStickerComponent : NSObject
@property (nonatomic) NSArray backupStickerIDArray;
@property (nonatomic) NSMutableDictionary completionDic;
@property (nonatomic) AWEIMVmojiRecentComponent recentComponent;
@property (nonatomic) AWEIMVmojiDataFetcher listFetcher;
@property (nonatomic) AWEIMVmojiDataFetcher quickStickerFetcher;
- (void)setListFetcher:;
- (id)listFetcher;
- (void)setRecentComponent:;
- (id)recentComponent;
- (void)fetchEmoticonWithKey:completion:;
- (void)removeFetchCompletionWithKey:;
- (id)p_quickStickerArray;
- (id)completionDic;
- (id)quickStickerFetcher;
- (id)backupStickerIDArray;
- (void)setBackupStickerIDArray:;
- (void)setQuickStickerFetcher:;
- (void)setCompletionDic:;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
@end
