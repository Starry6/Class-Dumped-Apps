@interface TTAccountJSONResponseSerializer : TTHTTPJSONResponseSerializerBase
@property (nonatomic) NSSet acceptableContentTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (id)init;
+ (id)dictionaryWithJSONData:resultError:;
+ (void)error:addHTTPStatusCodeWithResponse:;
+ (void)handleResponseResult:responseError:resultError:originalURL:;
+ (void)normalParseResponseResult:resultError:exceptionInfo:exceptionAsError:originalURL:;
+ (void)normalizeError:withResponseResult:;
+ (void)specialHandleResponseResult:withError:originalURL:;
+ (void)validateResponseResult:resultError:;
+ (id)serializer;
@end
