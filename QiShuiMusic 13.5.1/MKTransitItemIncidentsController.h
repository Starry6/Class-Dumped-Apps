@interface MKTransitItemIncidentsController : NSObject
@property (nonatomic) NSDate referenceDate;
- (void)setReferenceDate:;
- (id)initWithMapItem:;
- (void).cxx_destruct;
- (id)referenceDate;
- (void)resetCache;
- (id)initWithLineItem:;
- (id)validIncidents;
- (id)_incidentsAffectingMuid:;
- (id)incidentsForLinesInSystem:;
- (id)incidentsForSystem:;
- (id)incidentsForLine:;
- (id)incidentsForMapItem:;
- (id)incidentsForDepartureSequence:;
- (id)blockedIncidentEntities;
@end
