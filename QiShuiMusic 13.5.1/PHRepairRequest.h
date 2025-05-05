@interface PHRepairRequest : PHMediaRequest
@property (nonatomic) PHAssetResource resource;
@property (nonatomic) NSSet errorCodes;
- (void)dealloc;
- (void)startRequest;
- (void).cxx_destruct;
- (id)resource;
- (BOOL)isSynchronous;
- (id)initWithRequestID:requestIndex:contextType:managerID:asset:assetResource:errorCodes:delegate:;
- (id)_sendRepairRequestWithReply:;
- (id)errorCodes;
@end
