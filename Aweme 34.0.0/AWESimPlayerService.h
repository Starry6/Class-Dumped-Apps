@interface AWESimPlayerService : NSObject
+ (BOOL)enableSimPlayerV2:model:;
+ (BOOL)enableSimPlayerV2PrefetchBSModule;
+ (BOOL)enableSimPlayerV2BSModelTransfomer;
+ (BOOL)enableSimPlayerV2SRModule;
+ (BOOL)enableSimPlayerV2;
+ (BOOL)enableSimPlayer;
+ (BOOL)isSimPlayerV2:;
+ (BOOL)enableSimPlayerV2BSModule;
+ (BOOL)enableSimPlayerV2Exp;
+ (BOOL)enableSimPlayerWhitelist;
+ (void)setLoggerFlag:;
+ (BOOL)enableSimPlayerV2:;
+ (id)simplayerSignature:;
+ (void)setupConfig;
@end
