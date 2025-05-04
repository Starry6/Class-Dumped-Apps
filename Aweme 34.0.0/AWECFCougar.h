@interface AWECFCougar : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)setCustomContextValue:forKey:;
+ (void)setCustomFilterValue:forKey:;
+ (void)trackData:logTypeStr:;
+ (void)trackService:status:extra:;
+ (void)trackService:metric:category:extra:;
+ (void)removeCustomFilterKey:;
+ (id)monitorManager;
+ (void)trackData:;
+ (void)event:label:durations:needAggregate:;
+ (id)monitorInstance;
+ (id)inJectedInfoInstance;
@end
