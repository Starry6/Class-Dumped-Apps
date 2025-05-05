@interface IESLivePKComponentLayoutManager : IESLivePKComponent
@property (nonatomic) IESLiveStackView topRightStackContainer;
@property (nonatomic) NSMutableDictionary topRightViewDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addSubView:layoutType:priority:;
- (BOOL)containSubView:;
- (void)componentContainerFrameChanged;
- (void)componentFinished;
- (void)componentInteracting;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)didSetAttachingDIContext;
- (void)removeSubViewWithLayoutType:priority:;
- (void)setTopRightStackContainer:;
- (void)setTopRightViewDict:;
- (void)setupContainerIfNeeded;
- (id)topRightStackContainer;
- (id)topRightViewDict;
- (void)updateStackContainerLayout:withViewDict:;
- (void)updateTopRightStackContainerTopOffset;
- (void).cxx_destruct;
@end
