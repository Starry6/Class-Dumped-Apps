@interface IESLiveLinkmicLinker : NSObject
@property (nonatomic) <IESLiveLinkmicCanvasManager> canvasManager;
@property (nonatomic) <IESLiveLinkmicLinkerDelegate> delegate;
@property (nonatomic) q linkmicUserState;
@property (nonatomic) NSString currentLinkmicID;
- (id)canvasManager;
- (id)currentLinkmicID;
- (long long)linkmicUserState;
- (void)setLinkmicUserState:;
- (void)setLinkmicUserState:force:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
