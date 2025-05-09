@interface MKMapItemView : UIView
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) BOOL shouldResolveMapItem;
@property (nonatomic) BOOL shouldShowBorders;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapItem;
- (void)_setupObserver;
- (void)cancel;
- (void)dealloc;
- (void)_resetState;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)infoCardThemeChanged;
- (id)_annotationView;
- (void)_handleTapOnLookAroundView:;
- (void)_handleTapOnSnapshot:;
- (void)_reloadSnapshot;
- (void)_receivedFullyDrawnNotification:;
- (void)setShouldShowBorders:;
- (void)_updateBorders;
- (void)loadMapItem:coordinateSpan:completionHandler:;
- (BOOL)_areBoundsValid;
- (void)_callCompletionHandlerWithInvalidBoundsError;
- (id)_clampCoordinateSpan:;
- (void)_getParentItem;
- (void)_fetchLookAroundViewforMapItem:;
- (void)_takeSnapshotWithCompletionHandler:isReload:;
- (id)_deriveSnapshotOptions:;
- (id)_customAnnotation;
- (void)_setupLookAroundConstraints;
- (void)_setupSnapshotConstraints;
- (void)_takeSnapshotCompleted;
- (void)_renderMapItem;
- (void)_callCompletionHandler;
- (void)_resetLookAroundContainerViewState;
- (void)triggerAnimation;
- (BOOL)shouldHideLookAroundForParsec;
- (BOOL)shouldResolveMapItem;
- (void)setShouldResolveMapItem:;
- (BOOL)shouldShowBorders;
@end
