@interface SASProximityMigrationTransferPreparationAction : SASProximityAction
@property (nonatomic) NSString deviceName;
- (void)setDeviceName:;
- (id)deviceName;
- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)requestPayload;
+ (unsigned long long)actionID;
+ (id)actionFromDictionary:;
@end
