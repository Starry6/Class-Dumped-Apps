@interface AVFragmentedMovie : AVMovie
@property (nonatomic) NSArray tracks;
@property (nonatomic) BOOL associatedWithFragmentMinder;
- (id)tracks;
- (id)trackWithTrackID:;
- (BOOL)isAssociatedWithFragmentMinder;
- (id)tracksWithMediaType:;
- (void)_setIsAssociatedWithFragmentMinder:;
- (id)initWithURL:options:;
- (id)tracksWithMediaCharacteristic:;
- (BOOL)_mindsFragments;
- (BOOL)_needsLegacyChangeNotifications;
- (Class)_classForMovieTracks;
+ (BOOL)expectsPropertyRevisedNotifications;
@end
