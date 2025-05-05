@interface EffectPlatformBookMark : NSObject
@property (nonatomic) NSMutableDictionary bookmarkDic;
- (void)setBookmarkDic:;
- (void)_loadBookMark;
- (id)bookmarkDic;
- (id)init;
- (void)_save;
- (void).cxx_destruct;
+ (BOOL)isReadForPanel:;
+ (void)markReadForPanelName:timeStamp:;
+ (BOOL)isReadForCategory:;
+ (BOOL)isReadForEffect:;
+ (BOOL)isReadForPanelName:timeStamp:;
+ (void)markReadForCategory:;
+ (void)markReadForEffect:;
+ (void)markReadForPanel:;
+ (id)sharedInstance;
@end
