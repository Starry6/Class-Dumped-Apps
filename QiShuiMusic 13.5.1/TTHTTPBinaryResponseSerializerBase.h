@interface TTHTTPBinaryResponseSerializerBase : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseObjectForResponse:data:responseError:resultError:;
+ (id)serializer;
@end
