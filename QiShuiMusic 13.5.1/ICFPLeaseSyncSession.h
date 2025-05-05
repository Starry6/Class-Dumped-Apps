@interface ICFPLeaseSyncSession : NSObject
@property (nonatomic) Q accountID;
@property (nonatomic) @ leaseID;
@property (nonatomic) I mediaKind;
- (void)dealloc;
- (unsigned long long)accountID;
- (unsigned int)mediaKind;
- (void).cxx_destruct;
- (id)_initWithFPLeaseSync:leaseID:accountID:hardwareInfo:mediaKind:;
- (BOOL)endLeaseSyncAndReturnError:;
- (BOOL)getLeaseSyncRenewRequestData:error:;
- (BOOL)importLeaseSyncResponseData:error:;
- (BOOL)processRenewResponseData:error:;
- (id)leaseID;
+ (id)leaseSyncSessionWithID:accountID:mediaKind:returningLeaseSyncRequestData:error:;
@end
