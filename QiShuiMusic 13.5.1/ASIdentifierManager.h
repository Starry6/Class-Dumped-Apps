@interface ASIdentifierManager : NSObject
@property (nonatomic) NSUUID advertisingIdentifier;
@property (nonatomic) BOOL advertisingTrackingEnabled;
- (BOOL)__enableIDFA;
- (id)tm_advertisingIdentifier;
- (id)tm_hook_idfa_advertisingIdentifier;
- (id)tspk_idfa_advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (id)advertisingIdentifier;
- (BOOL)isAdvertisingTrackingEnabled;
- (BOOL)isUserOptedIn;
+ (BOOL)enableCollectIDFAInBasicMode;
+ (void)tm_preload;
+ (void)tm_hook_idfa_preload;
+ (void)tspk_idfa_preload;
+ (id)sharedManager;
@end
