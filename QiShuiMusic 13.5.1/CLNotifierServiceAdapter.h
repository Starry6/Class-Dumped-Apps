@interface CLNotifierServiceAdapter : CLIntersiloService
@property (nonatomic) ^{CLNotifierBase=^^?} notifier;
@property (nonatomic) BOOL valid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)notifier;
- (void)unregister:forNotification:;
- (int)notifierClientNumForCoparty:;
- (void)register:forNotification:registrationInfo:;
- (id)debugDescription;
- (void)setAdaptedNotifier:;
- (void)forget:;
- (void).cxx_destruct;
- (void)invalidate;
- (id).cxx_construct;
@end
