@interface AVFragmentedAsset : AVURLAsset
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
- (Class)_classForAssetTracks;
+ (BOOL)expectsPropertyRevisedNotifications;
+ (id)fragmentedAssetWithURL:options:;
@end
