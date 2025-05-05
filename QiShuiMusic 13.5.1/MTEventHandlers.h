@interface MTEventHandlers : MTObject
@property (nonatomic) MTBaseEventDataProvider base;
@property (nonatomic) NSMutableDictionary registrations;
- (void)setRegistrations:;
- (void)setBase:;
- (id)base;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)registrations;
- (void)registerDefaultEventHandlers;
- (Class)baseDataProviderClass;
- (void)registerEventHandlerName:eventHandlerClass:;
- (void)registerEventHandlerName:eventHandlerClass:eventData:;
- (void)registerEventHandlerName:eventData:;
@end
