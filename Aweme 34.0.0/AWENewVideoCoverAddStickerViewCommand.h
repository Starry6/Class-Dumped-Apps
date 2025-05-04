@interface AWENewVideoCoverAddStickerViewCommand : AWENewVideoCoverCommand
@property (nonatomic) UIView<ACCStickerContentProtocol> content;
@property (nonatomic) ACCStickerConfig config;
@property (nonatomic) ACCStickerContainerView stickerContainer;
- (void)setStickerContainer:;
- (id)stickerContainer;
- (void)realExecute;
- (void)realUnExecute;
- (void)setConfig:;
- (id)content;
- (id)config;
- (void)setContent:;
- (void).cxx_destruct;
@end
