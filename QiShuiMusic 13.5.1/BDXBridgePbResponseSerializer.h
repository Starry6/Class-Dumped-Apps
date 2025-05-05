@interface BDXBridgePbResponseSerializer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentTypeForResponse:;
- (id)responseObjectForResponse:data:responseError:resultError:;
+ (id)serializer;
@end
