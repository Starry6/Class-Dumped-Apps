@interface NEIKEv2CreateChildPacket : NEIKEv2Packet
- (void).cxx_destruct;
- (void)gatherPayloads;
- (void)filloutPayloads;
+ (id)copyTypeDescription;
+ (unsigned long long)exchangeType;
@end
