@interface TSPKPageStatusStore : NSObject
@property (nonatomic) <TSPKLock> lock;
@property (nonatomic) NSMutableDictionary pageStatusInfo;
@property (nonatomic) NSArray caredPages;
- (id)caredPages;
- (void)handlePageStatusChangeNotification:;
- (unsigned long long)pageStatus:;
- (id)pageStatusInfo;
- (void)setCaredPages:;
- (void)setConfigs:;
- (void)setPageStatusInfo:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)addObserver;
- (void)setLock:;
+ (id)shared;
@end
