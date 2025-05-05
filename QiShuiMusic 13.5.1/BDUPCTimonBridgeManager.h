@interface BDUPCTimonBridgeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)UPCEnableAutoReadClipboardBlock;
+ (id)TimonAdID;
+ (void)TimonApplogTrack:params:;
+ (BOOL)TimonMonitorEnable;
+ (void)TimonMonitorTrack:metric:category:extra:;
+ (id)TimonRemoteSettings;
+ (id)UPCBasicModeStatusBlock;
+ (id)UPCPrivacyStatusBlock;
+ (id)UPCRecordAdIDCountBlock;
+ (id)UPCTeenModeStatusBlock;
+ (id)delegate;
@end
