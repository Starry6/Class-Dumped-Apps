@interface TapPoint : NSObject
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL playbackEnabled;
- (id)initWithX:y:;
- (double)x;
- (void)setX:;
- (double)y;
- (void)setY:;
- (BOOL)enabled;
- (void)setEnabled:;
- (BOOL)playbackEnabled;
- (void)setPlaybackEnabled:;
@end
