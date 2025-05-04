@interface AWEMusicBottomPlayerService : HTSService
@property (nonatomic) RxMultipleDelegate<AWEMusicBottomPlayerStatusProtocol> multipleDelegate;
@property (nonatomic) UIView<AWEMusicStreamingBottomPlayer> showingBottomPlayer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)multipleDelegate;
- (void)setMultipleDelegate:;
- (id)showingBottomPlayer;
- (void)setShowingBottomPlayer:;
- (void)bottomPlayerWillShow:;
- (void)bottomPlayerWillDismiss:;
- (void)removeObserver:;
- (void)addObserver:;
- (void).cxx_destruct;
+ (void)hook;
+ (id)bottomPlayerWithoutAutoCreate:;
+ (id)bottomPlayerWith:;
+ (BOOL)isBottomPlayerShowing;
+ (double)safeBottomHeight;
+ (void)removeObserver:;
+ (void)addObserver:;
+ (id)shared;
+ (double)viewHeight;
@end
