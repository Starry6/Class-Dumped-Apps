@interface NWActivityFragment : NSManagedObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSUUID uuid;
@property (nonatomic) NSUUID parentUUID;
@property (nonatomic) NWActivityMetricData metricData;
@property (nonatomic) NSNumber type;
+ (id)entityName;
@end
