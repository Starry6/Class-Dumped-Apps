@interface TUDiscoverabilitySignal : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString context;
- (id)context;
- (id)identifier;
- (void).cxx_destruct;
- (void)donateSignalWithCompletion:;
- (id)initWithIdentifier:context:;
+ (BOOL)isSeniorUser;
+ (void)logTipKitAnalyticsEventNamed:;
@end
