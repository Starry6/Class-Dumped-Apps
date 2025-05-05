@interface AVControlOverflowButton : AVButton
@property (nonatomic) <AVControlOverflowButtonDelegate> delegate;
- (void)setDelegate:;
- (void)updateContextMenu;
- (id)_contextMenuInteraction:styleForMenuWithConfiguration:;
- (id)contextMenuInteraction:configurationForMenuAtLocation:;
- (void)contextMenuInteraction:willDisplayMenuForConfiguration:animator:;
- (id)delegate;
- (void).cxx_destruct;
- (void)contextMenuInteraction:willEndForConfiguration:animator:;
+ (id)firstGenerationButton;
+ (id)secondGenerationButton;
@end
