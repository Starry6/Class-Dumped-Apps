@interface AWETeenNetworkRequestSerializer : AWENetworkRequestSerializer
- (id)URLRequestWithURL:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithURL:headerField:params:method:constructingBodyBlock:commonParams:;
- (id)URLRequestWithRequestModel:commonParams:;
- (long long)userGender;
- (id)teenCommonParam:URL:;
- (long long)userAge;
+ (id)serializer;
@end
