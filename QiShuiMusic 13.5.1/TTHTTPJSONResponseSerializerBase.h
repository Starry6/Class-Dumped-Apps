@interface TTHTTPJSONResponseSerializerBase : NSObject
@property (nonatomic) NSObject<TTJSONResponseSerializerProtocol> currentImpl;
@property (nonatomic) NSSet acceptableContentTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentImpl:;
- (id)acceptableContentTypes;
- (id)currentImpl;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (void)setAcceptableContentTypes:;
- (id)init;
- (void).cxx_destruct;
+ (id)serializer;
@end
