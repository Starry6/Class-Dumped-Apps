@interface HTSDBigMonkey : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)monitorInstance;
+ (void)event:label:durations:needAggregate:;
+ (id)inJectedInfoInstance;
+ (id)monitorManager;
+ (void)removeCustomFilterKey:;
+ (void)setCustomContextValue:forKey:;
+ (void)setCustomFilterValue:forKey:;
+ (void)trackData:;
+ (void)trackData:logTypeStr:;
+ (void)trackService:metric:category:extra:;
+ (void)trackService:status:extra:;
@end
