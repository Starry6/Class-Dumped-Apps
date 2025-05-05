@interface STCoreTransportPayload : NSManagedObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString type;
@property (nonatomic) STCoreOrganization sourceOrganizationEnqueued;
@property (nonatomic) STCoreOrganization sourceOrganizationPending;
@property (nonatomic) STCoreOrganization sourceOrganizationRecent;
@property (nonatomic) NSArray destinations;
@property (nonatomic) NSData payloadData;
- (id)destinations;
- (void)setDestinations:;
- (id)description;
+ (id)fetchRequestForPayloadsOfType:;
+ (id)fetchLastTransportPayloadInContext:ofType:error:;
+ (id)fetchTransportPayloadContext:withIdentifier:error:;
@end
