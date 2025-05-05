@interface CBHIDService : NSObject
@property (nonatomic) ^{__IOHIDServiceClient=} service;
@property (nonatomic) Q registryID;
@property (nonatomic) ^{__IOHIDEvent=} event;
@property (nonatomic) BOOL builtIn;
- (id)init;
- (void)setEvent:;
- (void)dealloc;
- (id)event;
- (id)copyPropertyForKey:;
- (id)service;
- (unsigned long long)registryID;
- (BOOL)builtIn;
- (BOOL)setPropertyForKey:withValue:;
- (id)initWithHIDServiceClient:andIdentifier:;
- (BOOL)updateEventData;
- (BOOL)conformsToUsagePage:andUsage:;
- (BOOL)conformsToHIDService:;
@end
