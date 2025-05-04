@interface AWEIMFansGroupModuleServiceTracker : NSObject
- (void)tracApplyJoinGroupEnterchatEventWithCid:applyModel:extraParams:;
- (void)trackApplyJoinGroupDataInfo:applyModel:;
- (void)trackEnterChatEventWithCid:model:;
- (id)trackUserParamsWithModel:;
@end
