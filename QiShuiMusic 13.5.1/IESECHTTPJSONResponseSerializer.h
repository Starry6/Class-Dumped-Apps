@interface IESECHTTPJSONResponseSerializer : TTHTTPJSONResponseSerializerBase
- (id)errorUserInfoWithResponse:jsonObj:;
- (BOOL)isIgnoreStatusCodeAssert:;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (id)init;
+ (id)serializer;
@end
