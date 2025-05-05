@interface CNMetricsReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventKeyPrefix;
- (void)sendDictionary:forEvent:andLog:;
- (void)logSimpleEvent:forApplication:andLog:;
- (id)compoundKeyForEvent:;
+ (id)log;
+ (void)logDatabaseResolution:;
+ (void)sendDictionary:forEvent:;
+ (void)sendDictionary:forEvent:andLog:;
@end
