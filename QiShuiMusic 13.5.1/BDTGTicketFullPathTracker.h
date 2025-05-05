@interface BDTGTicketFullPathTracker : NSObject
@property (nonatomic) NSMutableDictionary ticketNameToTicketUpdateInfoMap;
@property (nonatomic) NSMutableDictionary ticketNameToTicketUpdateTimestampMap;
@property (nonatomic) NSMutableDictionary ticketNameToSignVerifyFailInfoMap;
- (id)ticketNameToTicketUpdateInfoMap;
- (void)serverDataDidUpdateWithRequset:response:;
- (void)setTicketNameToSignVerifyFailInfoMap:;
- (void)setTicketNameToTicketUpdateInfoMap:;
- (void)setTicketNameToTicketUpdateTimestampMap:;
- (id)signVerifyErrorForTicketName:;
- (void)signVerifyErrorUpdateWithRequest:response:;
- (void)ticketDidUpdateWithRequset:response:ticketName:ticket:tsSign:;
- (id)ticketNameToSignVerifyFailInfoMap;
- (id)ticketNameToTicketUpdateTimestampMap;
- (id)ticketUpdateInfoForTicketName:;
- (long long)ticketUpdateTimestampForTicketName:;
- (id)init;
- (void).cxx_destruct;
+ (id)snapshotForRequest:response:;
+ (id)sharedInstance;
@end
