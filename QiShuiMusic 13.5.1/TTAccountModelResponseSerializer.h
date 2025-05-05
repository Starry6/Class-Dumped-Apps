@interface TTAccountModelResponseSerializer : TTAccountJSONResponseSerializer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseObjectForResponse:jsonObj:requestModel:responseError:resultError:;
+ (id)serializer;
@end
