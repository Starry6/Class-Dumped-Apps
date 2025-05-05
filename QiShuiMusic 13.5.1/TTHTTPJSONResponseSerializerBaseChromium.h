@interface TTHTTPJSONResponseSerializerBaseChromium : NSObject
@property (nonatomic) NSSet acceptableContentTypeSet;
@property (nonatomic) NSMutableIndexSet acceptableStatusCodes;
@property (nonatomic) NSSet acceptableContentTypes;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)acceptableContentTypeSet;
- (id)acceptableContentTypes;
- (id)acceptableStatusCodes;
- (id)responseObjectForResponse:jsonObj:responseError:resultError:;
- (void)setAcceptableContentTypeSet:;
- (void)setAcceptableContentTypes:;
- (void)setAcceptableStatusCodes:;
- (id)init;
- (void).cxx_destruct;
+ (id)serializer;
@end
