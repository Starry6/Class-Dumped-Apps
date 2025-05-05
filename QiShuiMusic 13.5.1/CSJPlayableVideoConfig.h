@interface CSJPlayableVideoConfig : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} playerFrame;
@property (nonatomic) BOOL hideMoveTips;
@property (nonatomic) @? animationBlock;
@property (nonatomic) NSArray gridentLayerColors;
@property (nonatomic) BOOL showCloseBtn;
@property (nonatomic) BOOL enableTapGesture;
@property (nonatomic) q finishBehavior;
- (void)setPlayerFrame:;
- (BOOL)enableTapGesture;
- (long long)finishBehavior;
- (id)gridentLayerColors;
- (BOOL)hideMoveTips;
- (id)playerFrame;
- (void)setEnableTapGesture:;
- (void)setFinishBehavior:;
- (void)setGridentLayerColors:;
- (void)setHideMoveTips:;
- (void)setShowCloseBtn:;
- (BOOL)showCloseBtn;
- (void)setAnimationBlock:;
- (void).cxx_destruct;
- (id)animationBlock;
@end
