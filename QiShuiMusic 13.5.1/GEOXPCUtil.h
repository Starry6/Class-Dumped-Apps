@interface GEOXPCUtil : NSObject
+ (id)createServerConnectionWithQueue:debugIdentifier:traits:eventHandler:;
+ (id)daemonXPCConnectionCreationBlock;
+ (void)setDaemonXPCConnectionCreationBlock:;
+ (id)createServerConnectionWithQueue:debugIdentifier:eventHandler:;
+ (id)createServerConnectionWithDebugIdentifier:eventHandler:;
+ (void)setDefaultXPCServerConnectionQueue:;
+ (id)defaultXPCServerConnectionQueue;
@end
