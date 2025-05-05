@interface CSReceiverServerPreferences : CoreSpotlightPreferences
@property (nonatomic) NSSet disabledServices;
- (id)init;
- (void)enableService:;
- (void)disableService:;
- (id)disabledServices;
@end
