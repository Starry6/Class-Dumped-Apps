@interface HMDTTNetHelper : NSObject
+ (BOOL)isTTNetChromium;
+ (id)getCookiesForRequest:;
+ (unsigned long long)getHeadersLength:;
+ (unsigned long long)getRequestLengthForRequest:;
+ (unsigned long long)getResponseLengthForResponse:body:;
@end
