@interface IESLiveBigPartyBaseStage : NSObject
@property (nonatomic) BOOL didLoad;
@property (nonatomic) <IESLiveBigPartyStageDelegate> delegate;
@property (nonatomic) <IESLiveBigPartyStageDataSource> dataSource;
@property (nonatomic) IESLiveBigPartyAnchorEmojiContainerView anchorOwnEmojiContainer;
@property (nonatomic) IESLiveBigPartyAnchorInteractiveEmoji1V6ContainerView anchorInteractiveEmojiContainer;
- (id)anchorInteractiveEmojiContainer;
- (void)addAnchorEmojiContainer;
- (id)anchorOwnEmojiContainer;
- (BOOL)canPerformWillLoad;
- (BOOL)canPerformWillUnLoad;
- (void)didSetAttachingDIContext;
- (void)removeAnchorEmojiContainer;
- (void)setDataSource:;
- (void)setDelegate:;
- (id)dataSource;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)didLoad;
- (void)setDidLoad:;
@end
