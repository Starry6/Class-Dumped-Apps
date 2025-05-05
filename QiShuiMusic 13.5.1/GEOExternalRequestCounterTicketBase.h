@interface GEOExternalRequestCounterTicketBase : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)requestCompletedWithAMPResult:;
- (void)_incrementExternalForApp:startTime:endTime:xmitBytes:recvBytes:usedInterfaces:requestType:requestSubtype:source:;
+ (id)externalRequestCounterForType:subtype:source:appId:;
@end
