@interface MKTrafficSupport : NSObject
- (id)localizedReportedByYouForGEOIncidentType:;
- (id)localizedSubtitleForStreet:crossStreet:;
- (id)localizedReportConfirmationForIncidentType:;
- (long long)_convertType:;
- (id)localizedTitleForGEOIncidentType:laneType:laneCount:;
- (id)localizedRAPDescriptionForGEOIncidentType:;
- (id)localizedTitleForIncidentType:laneType:laneCount:;
- (void)setupTrafficIncidents;
+ (id)sharedTrafficSupport;
@end
