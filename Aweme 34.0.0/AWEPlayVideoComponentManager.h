@interface AWEPlayVideoComponentManager : NSObject
@property (nonatomic) <AWEPlayVideoComponentContainerProtocol> playerViewController;
@property (nonatomic) NSArray components;
- (BOOL)shouldPreventPlay;
- (id)componentClassArray;
- (id)coverImageViewContentMode;
- (id)videoPlayerScaleMode;
- (void)setModel:;
- (id)initWithPlayerViewController:;
- (void)setComponents:;
- (void).cxx_destruct;
- (id)components;
- (id)playerViewController;
- (void)setPlayerViewController:;
- (void)setupComponents;
@end
