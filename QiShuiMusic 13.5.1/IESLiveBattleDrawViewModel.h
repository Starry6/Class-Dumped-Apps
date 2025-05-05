@interface IESLiveBattleDrawViewModel : NSObject
@property (nonatomic) IESLiveBattleDrawPropAnimationQueue drawQueue;
@property (nonatomic) BOOL openBattleDraw;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkMessageIsVaild:;
- (void)clearAllNodes;
- (void)didSetAttachingDIContext;
- (id)drawQueue;
- (id)initWithDIContext:;
- (BOOL)openBattleDraw;
- (void)setDrawQueue:;
- (void)setOpenBattleDraw:;
- (void).cxx_destruct;
- (void)messageReceived:;
@end
