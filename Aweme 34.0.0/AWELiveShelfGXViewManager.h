@interface AWELiveShelfGXViewManager : NSObject
@property (nonatomic) NSMutableDictionary GXViewPool;
@property (nonatomic) ^{__CFRunLoopObserver=} runLoopObserver;
@property (nonatomic) BOOL isInRoom;
- (void)stopRunLoopObserver;
- (void)stopPreload;
- (void)startPreload;
- (void)releaseGXView:withId:bizId:version:;
- (id)fetchGXViewWithId:bizId:version:;
- (void)setGXViewPool:;
- (void)setIsInRoom:;
- (id)GXViewPool;
- (id)keyWithId:bizId:version:;
- (id)popViewWithKey:;
- (id)createGXViewWithId:bizId:version:;
- (BOOL)isInRoom;
- (void)storeView:forKey:;
- (unsigned long long)viewCountWithKey:;
- (void)setCanPreload:;
- (void).cxx_destruct;
- (id)runLoopObserver;
- (void)setRunLoopObserver:;
+ (id)shareManager;
@end
