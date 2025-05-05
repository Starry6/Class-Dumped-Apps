@interface AKDeviceListDeltaMessagePayload : NSObject
@property (nonatomic) NSString altDSID;
@property (nonatomic) Q operation;
@property (nonatomic) NSString machineID;
@property (nonatomic) NSArray machineIDs;
@property (nonatomic) NSString serialNumber;
@property (nonatomic) NSDate timestamp;
- (id)serialNumber;
- (unsigned long long)operation;
- (id)altDSID;
- (id)machineID;
- (void).cxx_destruct;
- (id)timestamp;
- (id)initWithResponseBody:;
- (unsigned long long)_convertOperationToEnum:;
- (id)machineIDs;
@end
