@interface CARInputDevice : NSObject
@property (nonatomic) NSString UUID;
@property (nonatomic) Q senderID;
- (unsigned long long)senderID;
- (void).cxx_destruct;
- (id)UUID;
- (void)_setUUID:;
- (void)_setSenderID:;
- (id)initWithServiceClient:UUID:;
@end
