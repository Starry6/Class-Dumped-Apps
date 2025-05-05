@interface NEHotspotHelperCommand : NSObject
@property (nonatomic) q commandType;
@property (nonatomic) NEHotspotNetwork network;
@property (nonatomic) NSArray networkList;
- (id)network;
- (void)dealloc;
- (long long)commandType;
- (id)networkList;
- (id)description;
- (id)createResponse:;
- (id)createTCPConnection:;
- (id)createUDPSession:;
@end
