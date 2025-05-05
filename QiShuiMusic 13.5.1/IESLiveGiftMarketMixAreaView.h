@interface IESLiveGiftMarketMixAreaView : UIView
@property (nonatomic) PuzzleHybridContainer giftMarketMixAreaLynxContainer;
@property (nonatomic) @? pendingLynxDataUpdateBlock;
@property (nonatomic) BOOL lynxViewLoadFinished;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)giftMarketMixAreaLynxContainer;
- (id)initWithFrame:marketAreaModel:;
- (void)loadLynxViewWithMarketAreaModel:;
- (id)lynxDataWithModel:;
- (BOOL)lynxViewLoadFinished;
- (id)pendingLynxDataUpdateBlock;
- (void)removeCurrentLynxViewIfNeeded;
- (void)setGiftMarketMixAreaLynxContainer:;
- (void)setLynxViewLoadFinished:;
- (void)setPendingLynxDataUpdateBlock:;
- (void)setupWithMarketAreaModel:;
- (void)updateWithMarketAreaModel:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidRecieveError:;
- (void)dealloc;
- (void).cxx_destruct;
@end
