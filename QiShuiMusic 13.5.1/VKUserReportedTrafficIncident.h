@interface VKUserReportedTrafficIncident : VKTrafficFeature
@property (nonatomic) q type;
- (long long)type;
- (id)initWithIncidentType:uniqueIdentifier:position:onRoute:;
@end
