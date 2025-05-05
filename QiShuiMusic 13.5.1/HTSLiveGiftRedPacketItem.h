@interface HTSLiveGiftRedPacketItem : HTSLiveGiftItem
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (void)showSendRedEnvelopeView;
- (BOOL)canSelect;
+ (id)itemFromModel:attachingDIContext:;
@end
