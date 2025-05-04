@interface AWEAIMattingStickerContentView : UIView
@property (nonatomic) UIView<ACCStickerProtocol> wrapperView;
@property (nonatomic) BOOL transparent;
@property (nonatomic) q stickerId;
@property (nonatomic) @? triggerDragDeleteCallback;
@property (nonatomic) @? coordinateDidChange;
@property (nonatomic) <ACCStickerContainerProtocol> stickerContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)stickerId;
- (void)setStickerId:;
- (void)setStickerContainer:;
- (id)stickerContainer;
- (void)updateWithCurrentPlayerTime:;
- (id)coordinateDidChange;
- (void)setCoordinateDidChange:;
- (id)wrapperView;
- (BOOL)isTransparent;
- (void).cxx_destruct;
- (void)setTransparent:;
- (void)setWrapperView:;
@end
