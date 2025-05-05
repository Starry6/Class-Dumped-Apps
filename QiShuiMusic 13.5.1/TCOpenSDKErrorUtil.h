@interface TCOpenSDKErrorUtil : NSObject
+ (id)openSDKErrorWithCode:extraInfo:;
+ (id)apiResponse:;
+ (void)apiResponseConvert:;
+ (id)apiResponseFromErrorCode:;
+ (long long)filterURLErrorCode:;
+ (id)openSDKErrorFromOSError:;
+ (id)openSDKErrorMsgForErrorCode:;
+ (id)openSDKErrorWithCommonServerCode:extraInfo:;
@end
