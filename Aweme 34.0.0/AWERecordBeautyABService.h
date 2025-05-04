@interface AWERecordBeautyABService : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isEnableTrackerLogStatus;
- (BOOL)isEnableRecordBeautyAddStyleEffectSwitchStatus;
- (BOOL)isEnableLeaveRecordBeautyAddStyleEffectStatus;
- (BOOL)isEnableStyleItemGuideBubbleShowStatus;
- (id)styleItemGuideBubbleContent;
- (double)styleItemGuideBubbleAutoDismissTime;
- (double)styleItemGuideBubbleDelayInSecondTime;
- (BOOL)isEnableRefactoringRecorderBeautySwitchCloseAndOpenStatus;
- (BOOL)isEnableRecordCacheEffectLogStatus;
- (BOOL)isEnableRecordUpdateBeautyAvailabilitiesSingleStatus;
- (BOOL)isEnableRecordUpdateBeautyAvailabilitiesAsyncStatus;
- (BOOL)isEnableRecordBeautyTrackerOffNodeStatus;
- (id)abInfo;
@end
