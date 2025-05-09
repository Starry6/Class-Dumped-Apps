@interface IESLiveLinkmicCanvasView : UIView
@property (nonatomic) IESLiveLinkmicCanvasViewModel viewModel;
@property (nonatomic) UIView contentView;
@property (nonatomic) NSMutableArray cells;
@property (nonatomic) NSMutableArray slotSeperatorsLine;
@property (nonatomic) @? onCanvasViewLayoutFinishedBlock;
@property (nonatomic) <IESLiveLinkmicSessionViewProvider> sessionViewProvider;
@property (nonatomic) NSArray elements;
@property (nonatomic) UIView view;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) UIView mediaView;
@property (nonatomic) UIView backgroundView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)onCanvasViewLayoutFinishedBlock;
- (void)bindViewModel;
- (id)cellWithCellModel:;
- (id)generateCellWithViewModel:;
- (void)onCanvasViewLayoutFinished:;
- (id)sessionViewProvider;
- (void)setOnCanvasViewLayoutFinishedBlock:;
- (void)setSessionViewProvider:;
- (void)setSlotSeperatorsLine:;
- (void)setupSeparatorWithSlogConfigs:;
- (id)slotSeperatorsLine;
- (void)updateUIWithOldCellModels:newCellModels:;
- (id)backgroundView;
- (id)contentView;
- (id)viewModel;
- (id)elements;
- (id)mediaView;
- (id)view;
- (void)setCustomBackgroundView:;
- (void)setup;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)setViewModel:;
- (id)cells;
- (void)setupViews;
- (void)setCells:;
- (id)initWithFrame:viewModel:;
- (void)clean;
@end
