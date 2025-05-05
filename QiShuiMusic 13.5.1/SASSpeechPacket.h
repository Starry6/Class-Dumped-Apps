@interface SASSpeechPacket : SABaseCommand
@property (nonatomic) q packetNumber;
@property (nonatomic) NSArray packets;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)packets;
- (void)setPackets:;
- (long long)packetNumber;
- (void)setPacketNumber:;
+ (id)speechPacket;
+ (id)speechPacketWithDictionary:context:;
@end
