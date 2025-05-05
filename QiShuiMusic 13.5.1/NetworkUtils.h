@interface NetworkUtils : NSObject
+ (BOOL)createAndStartListener:withParameters:;
+ (void)setUniquePIDOnParameters:shouldRunInProcess:;
+ (BOOL)createNWPathEvaluator:withIPAddress:localPort:remotePort:shouldRunInProcess:useBackingSocket:;
+ (id)newNWConnectionWithIPAddress:srcPort:;
+ (int)socketWithIPAddress:srcPort:error:;
+ (int)connectedSocketWithIPAddress:srcPort:error:;
+ (int)nonConnectedSocketWithIPAddress:srcPort:error:;
+ (int)socketWithIPAddress:srcPort:shouldConnect:error:;
+ (id)newRTPSocketDictionary:rtpSourcePort:;
+ (id)securityKeyMaterialWithMediaKeyIndex:;
+ (id)newEncryptionInfoWithMediaKeyIndex:;
+ (id)encryptionInfoForKey:;
@end
