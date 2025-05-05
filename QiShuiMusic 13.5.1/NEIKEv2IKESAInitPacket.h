@interface NEIKEv2IKESAInitPacket : NEIKEv2Packet
- (void).cxx_destruct;
- (void)gatherPayloads;
- (void)filloutPayloads;
+ (id)copyTypeDescription;
+ (BOOL)encryptPayloads;
+ (unsigned long long)exchangeType;
@end
