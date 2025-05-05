@interface GEOTelephonyInfo : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)isMapsAuthorizedForCellular:result:;
- (id)init;
- (void)operatorNameChanged:name:;
- (id)cellularCarrierIfAvailable;
- (void)_updateMapsAuthed;
- (id)isDeviceAuthorizedForCellularIfAvailable;
- (void).cxx_destruct;
- (void)setupClient;
- (id)isMapsAuthorizedForCellularIfAvailable;
- (void)dataSettingsChanged:;
- (int)cellularDataStateIfAvailable;
+ (BOOL)hasCellularCapability;
+ (id)sharedInfo;
@end
