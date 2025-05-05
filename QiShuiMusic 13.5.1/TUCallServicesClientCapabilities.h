@interface TUCallServicesClientCapabilities : NSObject
@property (nonatomic) <TUCallServicesClientCapabilitiesActions> delegate;
@property (nonatomic) BOOL wantsCallDisconnectionOnInvalidation;
@property (nonatomic) BOOL wantsCallStopStreamingOnInvalidation;
@property (nonatomic) BOOL wantsFrequencyChangeNotifications;
@property (nonatomic) BOOL wantsCallNotificationsDisabledWhileSuspended;
- (BOOL)wantsCallStopStreamingOnInvalidation;
- (void)save;
- (void)setWantsFrequencyChangeNotifications:;
- (void)setDelegate:;
- (BOOL)wantsCallDisconnectionOnInvalidation;
- (id)initWithCoder:;
- (BOOL)wantsCallNotificationsDisabledWhileSuspended;
- (void)setWantsCallDisconnectionOnInvalidation:;
- (void)encodeWithCoder:;
- (id)delegate;
- (void)setWantsCallNotificationsDisabledWhileSuspended:;
- (void).cxx_destruct;
- (id)description;
- (void)setWantsCallStopStreamingOnInvalidation:;
- (BOOL)wantsFrequencyChangeNotifications;
+ (BOOL)supportsSecureCoding;
@end
