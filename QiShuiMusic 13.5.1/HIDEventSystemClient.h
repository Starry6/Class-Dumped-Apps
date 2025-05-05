@interface HIDEventSystemClient : NSObject
@property (nonatomic) NSArray services;
- (void)cancel;
- (void)dealloc;
- (void)setEventHandler:;
- (void)setDispatchQueue:;
- (void)setCancelHandler:;
- (BOOL)setProperty:forKey:;
- (id)propertyForKey:;
- (void)setServiceNotificationHandler:;
- (void)setEventFilterHandler:;
- (id)client;
- (void)setMatching:;
- (void).cxx_destruct;
- (void)setResetHandler:;
- (void)setPropertyChangedHandler:matching:;
- (id)description;
- (id)initWithType:andAttributes:;
- (id)services;
- (id)initWithType:;
- (void)activate;
@end
