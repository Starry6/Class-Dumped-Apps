@interface CJPayJSONResponseSerializer : TTHTTPJSONResponseSerializerBase
- (id)acceptableContentTypes;
- (void)error:addHTTPStatusCodeWithResponse:;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (id)init;
+ (id)serializer;
@end
