@interface AWELandscapeFeedTrackOffsetController : AWELandscapeFeedBaseController
@property (nonatomic) BOOL hasTrackLandscape;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needTrackLandscapeConentOffset;
- (void)setHasTrackLandscape:;
- (void)setupTrackLandscapeConentOffset;
- (void)prefetchPreviousDataListIfNeededWithDisplayIndexPath:;
- (BOOL)hasTrackLandscape;
- (void)scrollLandscapeToTrackOffsetIfNeeded;
- (void)collectionView:willDisplayCell:forItemAtIndexPath:;
- (void)viewDidAppear:;
@end
