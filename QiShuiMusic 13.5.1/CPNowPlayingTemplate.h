@interface CPNowPlayingTemplate : CPTemplate
@property (nonatomic) CARObserverHashTable nowPlayingObservers;
@property (nonatomic) NAFuture templateProviderFuture;
@property (nonatomic) NSArray nowPlayingButtons;
@property (nonatomic) BOOL upNextButtonEnabled;
@property (nonatomic) NSString upNextTitle;
@property (nonatomic) BOOL albumArtistButtonEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setTrailingNavigationBarButtons:;
- (void)setUpNextButtonEnabled:;
- (void)setAlbumArtistButtonEnabled:;
- (void)updateNowPlayingButtons:;
- (void)handleActionForControlIdentifier:;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:;
- (id)trailingNavigationBarButtons;
- (void)upNextButtonTapped;
- (void)albumArtistButtonTapped;
- (void)setUpNextTitle:;
- (void)handleAction:forControlIdentifier:;
- (id)_updateLowerRegionButtons:;
- (void)_updateNowPlayingTemplate;
- (id)nowPlayingButtons;
- (BOOL)isUpNextButtonEnabled;
- (id)upNextTitle;
- (BOOL)isAlbumArtistButtonEnabled;
- (id)nowPlayingObservers;
- (void)setNowPlayingObservers:;
+ (BOOL)supportsSecureCoding;
+ (id)sharedTemplate;
@end
