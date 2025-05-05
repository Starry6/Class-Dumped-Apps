@interface DIRSEventRealtimeRequestSchema : DIRSEventRequestSchema
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)serviceType;
+ (id)moduleId;
+ (id)sharedInstance;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
