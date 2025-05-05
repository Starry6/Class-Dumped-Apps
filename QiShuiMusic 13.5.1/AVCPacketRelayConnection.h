@interface AVCPacketRelayConnection : NSObject
+ (id)connectionWithSocket:remoteAddress:packetFilter:;
+ (id)connectionWithSocket:remoteAddress:;
+ (id)connectionWithSocket:;
+ (id)connectionWithIDSDestination:;
+ (id)connectionWithIDSSocketDescriptor:;
@end
