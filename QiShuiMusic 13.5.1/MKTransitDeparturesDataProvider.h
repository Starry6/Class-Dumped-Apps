@interface MKTransitDeparturesDataProvider : NSObject
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) <GEOMapItemTransitInfo> transitInfo;
@property (nonatomic) <MKTransitDeparturesDataProviderDelegate> delegate;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL supportSystemSectionCollapsing;
@property (nonatomic) BOOL allowsSystemSectionCollapsing;
@property (nonatomic) NSSet disabledSections;
@property (nonatomic) NSDate departureCutoffDate;
@property (nonatomic) NSDate lastCutoffDateWithValidSchedule;
@property (nonatomic) BOOL refreshing;
@property (nonatomic) NSDate lastInfoRefreshDate;
@property (nonatomic) NSString lastInfoRefreshErrorDescription;
@property (nonatomic) NSArray stationSystems;
@property (nonatomic) NSArray incidents;
@property (nonatomic) NSArray sectionControllers;
@property (nonatomic) BOOL isStuckWithExpiredInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)reloadData;
- (id)mapItem;
- (id)sectionControllers;
- (void)setDelegate:;
- (void)setMapItem:;
- (long long)numberOfRowsInSection:;
- (long long)_sectionForIdentifier:;
- (id)delegate;
- (id)initWithMapItem:;
- (long long)sectionForIdentifier:;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (void)setActive:;
- (BOOL)isActive;
- (BOOL)isRefreshing;
- (id)incidents;
- (id)transitInfo;
- (id)possibleActions;
- (id)_blockedIncidentEntities;
- (BOOL)_newStationCardUIEnabled;
- (void)setDepartureCutoffDate:;
- (id)departureCutoffDate;
- (BOOL)allowsSystemSectionCollapsing;
- (void)setSupportSystemSectionCollapsing:;
- (BOOL)supportsSystemSectionCollapsing;
- (void)transitItemReferenceDateUpdater:didUpdateToReferenceDate:;
- (id)ticketForTransitMapItemUpdater:;
- (void)transitMapItemUpdater:willUpdateMapItem:;
- (void)transitMapItemUpdater:updatedMapItem:error:;
- (id)disabledSections;
- (void)refreshSections;
- (long long)sectionTypeAtIndex:;
- (long long)indexOfFirstSectionWithType:;
- (id)identifierForSection:;
- (BOOL)_isSectionTypeEnabled:;
- (id)_identifierForSection:;
- (BOOL)isHidingDeparturesForSystem:;
- (void)hideDeparturesForSystem:removedIndices:;
- (void)showDeparturesForSystem:insertedIndices:;
- (id)_indexSetForHidingShowingSystem:;
- (BOOL)isLastSectionForSystem:;
- (id)directionForSection:;
- (void)showNextPageInSection:;
- (void)systemSelected:;
- (id)_systemForSection:directionIndex:;
- (id)systemForSection:;
- (id)_identifierForSystem:;
- (id)_directionsForSystem:hasSequencesWithNoDirection:;
- (id)incidentsForIncidentsSection;
- (id)incidentsForSystemIncidentsSection:;
- (id)dominantIncidentForDepartureSequence:;
- (BOOL)_hasIncidentsSection;
- (BOOL)isStuckWithExpiredInfo;
- (id)sectionControllerForSection:;
- (id)_controllerForSection:;
- (id)_identifierForSequence:;
- (id)departuresControllerForSection:;
- (long long)departureSequenceFrequencyTypeForSection:;
- (id)_departureSequencesForSection:;
- (id)_departureCutoffDateForLine:;
- (id)_departureCutoffDateForSequence:;
- (long long)_numberOfDeparturesSectionsForSystem:;
- (id)inactiveLinesForSection:;
- (id)_inactiveLinesControllerForSection:;
- (BOOL)_systemHasInactiveLines:;
- (id)_inactiveLinesForSystem:;
- (BOOL)_hasConnectionsSection;
- (BOOL)_hasPlaceCardMessageSection;
- (void)_updateRefreshFailureErrorDescription;
- (id)lastCutoffDateWithValidSchedule;
- (void)setLastCutoffDateWithValidSchedule:;
- (void)setDisabledSections:;
- (id)lastInfoRefreshDate;
- (id)lastInfoRefreshErrorDescription;
- (id)stationSystems;
@end
