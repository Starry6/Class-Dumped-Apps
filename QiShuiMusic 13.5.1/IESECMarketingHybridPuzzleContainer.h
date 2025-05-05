@interface IESECMarketingHybridPuzzleContainer : UIView
@property (nonatomic) UIView<IESHYContainerProtocol> puzzleView;
@property (nonatomic) <IESECMarketingHybridContainerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (id)initWithSchema:referFrame:data:extra:commonLog:lifeCycleDelegate:;
- (id)puzzleView;
- (void)sendEvent:params:;
- (void)setPuzzleView:;
- (void)viewDidChangeIntrinsicContentSize:withContainerID:;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidRecieveError:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)loadView;
@end
