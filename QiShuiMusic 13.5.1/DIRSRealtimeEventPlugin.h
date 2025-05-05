@interface DIRSRealtimeEventPlugin : DIRSBasicModule
@property (nonatomic) NSArray eventList;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) q state;
@property (nonatomic) DIRSContext context;
@property (nonatomic) NSString category;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventList;
- (BOOL)handleProcedure:withError:;
- (void)onRemoteSettingsDidUpdate:;
- (void)setEventList:;
- (void)commonInit;
- (void).cxx_destruct;
- (void)_apply:;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
