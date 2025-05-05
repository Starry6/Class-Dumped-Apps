@interface DisplayLinkWrapper : NSObject
@property (nonatomic) q preferredFramesPerSecond;
@property (nonatomic) @? tickBlock;
@property (nonatomic) BOOL paused;
- (void)destroyDisplayLink;
- (void)handleDisplayLink;
- (id)initWithPreferredFramesPerSecond:tickBlock:;
- (void)setupDisplayLink;
- (long long)preferredFramesPerSecond;
- (BOOL)isPaused;
- (void)setPaused:;
- (void).cxx_destruct;
- (id)tickBlock;
@end
