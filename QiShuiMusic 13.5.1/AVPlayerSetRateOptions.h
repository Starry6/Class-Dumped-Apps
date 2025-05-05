@interface AVPlayerSetRateOptions : NSObject
@property (nonatomic) BOOL preferCoordinatedPlaybackBehavior;
- (id)init;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)preferCoordinatedPlaybackBehavior;
- (void)setPreferCoordinatedPlaybackBehavior:;
@end
