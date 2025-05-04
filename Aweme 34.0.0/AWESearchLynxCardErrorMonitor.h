@interface AWESearchLynxCardErrorMonitor : NSObject
+ (void)reportSearchLynxCardErrorWithError:engine:lynxView:;
+ (id)getGeckoIdWithEngine:;
+ (BOOL)checkBlackListWithErrorCode:;
+ (id)getExtraParamsWithEngine:;
+ (id)getUrlWithEngine:;
+ (id)getErrorTypeWithLynxErrorCode:;
+ (void)reportSearchLynxCardErrorWithCategory:extra:lynxView:;
+ (id)getErrorTypeWithSearchLynxCardErrorCode:;
+ (void)reportElementErrorWithElement:lynxEngine:errorCode:message:detailInfo:originError:errorExtra:;
+ (void)reportJSBErrorWithJSB:errorCode:message:detailInfo:errorExtra:;
@end
