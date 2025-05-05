@interface LynxServiceInitializer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupService;
+ (id)serviceBizID;
+ (unsigned long long)serviceScope;
+ (id)sharedInstance;
+ (unsigned long long)serviceType;
@end
