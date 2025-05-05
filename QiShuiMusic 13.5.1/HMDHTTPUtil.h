@interface HMDHTTPUtil : NSObject
+ (id)getCookiesForRequest:;
+ (unsigned long long)getHeadersLength:;
+ (unsigned long long)getRequestLengthForRequest:streamLength:;
+ (unsigned long long)getResponseLengthForResponse:bodyLength:;
@end
