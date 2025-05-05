@interface MTEventHandlerRegistration : MTObject
@property (nonatomic) NSString registeredName;
@property (nonatomic) # eventHandlerClass;
@property (nonatomic) NSArray eventData;
@property (nonatomic) MTEventHandler eventHandler;
- (void)setEventHandler:;
- (id)eventHandler;
- (void).cxx_destruct;
- (id)eventData;
- (void)setEventData:;
- (id)initWithMetricsKit:name:class:eventData:;
- (id)registeredName;
- (void)setRegisteredName:;
- (Class)eventHandlerClass;
- (void)setEventHandlerClass:;
@end
