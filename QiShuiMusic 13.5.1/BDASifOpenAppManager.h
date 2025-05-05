@interface BDASifOpenAppManager : NSObject
+ (void)openOtherAppWithURL:cid:logExtra:callback:;
+ (void)useApplinkOpenOtherAppWithURL:cid:logExtra:adExtraData:callback:;
@end
