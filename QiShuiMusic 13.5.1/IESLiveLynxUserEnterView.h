@interface IESLiveLynxUserEnterView : IESLivePrivilegeEntryView
@property (nonatomic) PuzzleHybridContainer lynxUserEnterView;
@property (nonatomic) HTSLiveNativeAnimationUserEnterNode node;
@property (nonatomic) BOOL resourceComplete;
@property (nonatomic) BOOL lynxCreatedSuccess;
@property (nonatomic) BOOL isLynxFirstCreate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didClickView;
- (void)didPlayFinish:errorMsg:;
- (BOOL)isLynxFirstCreate;
- (BOOL)lynxCreatedSuccess;
- (id)lynxUserEnterView;
- (void)reportError:node:;
- (void)reportPerformanceWithNode:;
- (BOOL)resourceComplete;
- (void)setIsLynxFirstCreate:;
- (void)setLynxCreatedSuccess:;
- (void)setLynxUserEnterView:;
- (void)setResourceComplete:;
- (void)updateWithEnterMessageNode:;
- (id)node;
- (void)dealloc;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)endAnimation;
- (void)setNode:;
@end
