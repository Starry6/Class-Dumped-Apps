@interface BDUPCService : NSObject
+ (id)UPCEnableAutoReadClipboardBlock;
+ (BOOL)clipBoardStatus;
+ (id)UPCBasicModeStatusBlock;
+ (id)UPCPrivacyStatusBlock;
+ (id)UPCRecordAdIDCountBlock;
+ (id)UPCTeenModeStatusBlock;
+ (void)popupRecallView:type:completion:;
+ (void)registerBridge;
+ (void)setClipBoardStatus:;
+ (void)start;
@end
