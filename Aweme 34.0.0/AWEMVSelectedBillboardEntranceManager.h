@interface AWEMVSelectedBillboardEntranceManager : NSObject
+ (BOOL)shouldShowEntranceView;
+ (double)entranceViewHeight;
+ (void)fetchEntranceModelConfigWithCompletion:;
+ (void)trackEntranceViewShownWithModel:referString:;
+ (void)requestSelectedBillboardEntranceConfigWithRetryCount:completionBlock:;
+ (id)keyWithEntranceModel:;
+ (BOOL)didUserClickedViewWithModel:;
+ (void)saveUserClickedViewWithModel:;
+ (id)trackParamDictForEntranceModel:referString:;
+ (BOOL)shouldShowRedPointWithModel:;
+ (void)trackEntranceViewClickedWithModel:referString:;
+ (BOOL)isCurrentTimeBetweenTimestamp:andMidnightOfNextDayCount:;
@end
