@interface AWESearchRecomWordsMonitorHelper : NSObject
+ (void)trackRecomWordsDisplayFailedLogWithReason:awemeId:searchId:docType:;
+ (void)trackRecomWordsShowState:layoutType:searchModel:extraParams:;
+ (void)trackRecomWordsApiMonitorInfoWithType:model:extraParams:;
+ (long long)getAdStyleTypeWithModel:;
+ (void)trackRecomWordsDisplayFailedLogWithReason:;
+ (void)toastWithMessage:;
@end
