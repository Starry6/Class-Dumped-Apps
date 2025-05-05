@interface VGExternalAccessoryModelFilter : NSObject
@property (nonatomic) NSArray modelIdAllowlist;
@property (nonatomic) NSArray denylist;
- (id)init;
- (void)setModelIdAllowlist:;
- (id)modelIdAllowlist;
- (BOOL)allowsVehicleWithModelId:firmwareId:year:model:;
- (id)denylist;
- (void).cxx_destruct;
- (void)setDenylist:;
- (void)_initializeAllowAndDenylists;
@end
