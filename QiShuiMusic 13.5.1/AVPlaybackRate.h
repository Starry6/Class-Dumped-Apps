@interface AVPlaybackRate : AVPlaybackSpeed
@property (nonatomic) NSString compactLocalizedName;
- (id)initWithRate:localizedName:compactLocalizedName:;
- (id)compactLocalizedName;
- (id)initWithRate:localizedName:compactLocalizedName:symbolImage:;
@end
