@interface PLNSUUIDJournalEntryPayloadID : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithUUIDString:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUUIDBytes:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)payloadUUIDData;
- (id)payloadIDString;
@end
