@interface CBHIDEvent : NSObject
@property (nonatomic) ^{__IOHIDEvent=} event;
@property (nonatomic) ^{__IOHIDServiceClient=} service;
@property (nonatomic) float timestamp;
@property (nonatomic) I eventType;
@property (nonatomic) NSArray copyChildren;
@property (nonatomic) NSNumber serviceRegistryID;
- (int)integerValueForKey:;
- (void)setService:;
- (void)setEvent:;
- (float)floatValueForKey:;
- (void)dealloc;
- (id)event;
- (unsigned int)eventType;
- (id)copyChildren;
- (id)service;
- (id)initWithHIDEvent:andService:;
- (float)timestamp;
- (id)serviceRegistryID;
+ (id)newEvent:andService:;
@end
