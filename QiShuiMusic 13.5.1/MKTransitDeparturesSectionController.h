@interface MKTransitDeparturesSectionController : MKTransitSectionController
@property (nonatomic) MKTransitDepartureServiceGapFormatter serviceGapFormatter;
@property (nonatomic) BOOL showOperatingHours;
@property (nonatomic) BOOL departuresAreVehicleSpecific;
- (id)init;
- (void).cxx_destruct;
- (BOOL)departuresAreVehicleSpecific;
- (BOOL)_newStationCardUIEnabled;
- (id)initWithMapItem:system:;
- (void)setDepartureCutoffDate:;
- (void)_setNeedsBuildRows;
- (void)_buildRows;
- (id)_pagingFilter;
- (id)initWithMapItem:system:direction:;
- (id)initWithMapItem:system:departureSequenceContainer:;
- (void)_sharedSetup;
- (id)sequences;
- (id)sequenceForRow:outIsNewLine:outNextLineIsSame:;
- (BOOL)showOperatingHours;
- (id)serviceGapFormatter;
- (BOOL)_isDateLastDeparture:withNextDepartureDate:forSequence:;
- (id)_nextLastDepartureDateForSequence:afterDate:;
- (void)_serviceGapDate:string:forSequence:withDepartureIndex:;
- (id)serviceGapDescriptionForRow:;
- (void)setServiceGapFormatter:;
@end
