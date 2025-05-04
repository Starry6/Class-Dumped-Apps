@interface AWEShareSortManager : NSObject
@property (nonatomic) AWEShareDynamicSortManager dynamicSortManager;
@property (nonatomic) AWEShareStaticSortManager staticSortManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)willExecuteShareTask:;
- (void)sortChannels:withContext:;
- (void)updateMostRecentShareChannelTypesWithType:;
- (id)dynamicSortManager;
- (id)staticSortManager;
- (void)setDynamicSortManager:;
- (void)setStaticSortManager:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)shouldMoveDouPlusIconToFifthPlace:;
+ (void)sortChannels:withContext:;
+ (id)mostRecentShareChannelTypes;
+ (void)moveDouPlusIconToFifthPlace:withContext:;
+ (id)sharedManager;
@end
