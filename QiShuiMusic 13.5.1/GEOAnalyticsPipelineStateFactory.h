@interface GEOAnalyticsPipelineStateFactory : NSObject
@property (nonatomic) NSString countryCode;
- (void)setCountryCode:;
- (id)countryCode;
- (id)init;
- (id)curatedCollectionRedacted;
- (void)dealloc;
- (id)searchResults;
- (int)logMsgStateTypeForType:;
- (void)sessionStateForType:onQueue:callback:;
- (void)sessionStateForType:callback:;
- (id)stateForType:;
- (int)_privacyAllowedActionFromActualAction:;
- (void)sessionStateForType:sessionAppId:onQueue:callback:;
- (void)deviceCountryChanged:;
- (void).cxx_destruct;
- (id)_sessionStateForType:;
- (id)mapUIShown;
- (id)impressionObject;
- (id)placeCardReveal;
- (int)_launchActionFromAPLaunchAction:;
+ (id)sharedFactory;
@end
