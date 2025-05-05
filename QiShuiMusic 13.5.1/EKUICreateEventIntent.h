@interface EKUICreateEventIntent : INIntent
@property (nonatomic) NSString title;
@property (nonatomic) INObject startDate;
@property (nonatomic) INObject endDate;
@property (nonatomic) NSString locationName;
@property (nonatomic) CLPlacemark geolocation;
@property (nonatomic) NSString locationAddress;
@property (nonatomic) NSNumber allDay;
@end
