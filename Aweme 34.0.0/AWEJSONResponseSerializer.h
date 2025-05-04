@interface AWEJSONResponseSerializer : TTHTTPJSONResponseSerializerBaseChromium
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (id)init;
+ (id)serializer;
@end
