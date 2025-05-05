@interface VCWifiAssistManager : NSObject
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) C wifiAssistState;
- (void)addDelegate:;
- (id)init;
- (void)dealloc;
- (void)removeDelegate:;
- (BOOL)isAvailable;
- (void)didStopTrackingNOI:;
- (id)description;
- (void)didStartTrackingNOI:;
- (void)refreshBudget;
- (void)queryUserPreference;
- (void)queryBudget;
- (unsigned char)wifiAssistState;
+ (id)sharedInstance;
@end
