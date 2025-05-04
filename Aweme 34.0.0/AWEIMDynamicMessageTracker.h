@interface AWEIMDynamicMessageTracker : NSObject
+ (void)trackMessageEventWithModel:;
+ (BOOL)checkTrackInfoDataIsValid:withMessage:;
+ (id)clientCommonParamsWithMessage:context:;
+ (void)trackMessageShowIfNeeded:context:;
+ (void)trackMessageClickIfNeeded:context:paramsKey:;
@end
