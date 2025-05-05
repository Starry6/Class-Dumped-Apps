@interface NWActivityMetricData : NSManagedObject
@property (nonatomic) NSData data;
@property (nonatomic) NSSet fragment;
+ (id)entityName;
@end
