@interface SSVSAPSignatureComponent : NSObject
@property (nonatomic) q componentType;
@property (nonatomic) NSString key;
- (long long)componentType;
- (id)dataToSignWithRequestProperties:;
- (id)initWithComponentType:key:;
- (id)key;
- (id)_dataToSignWithDataSource:;
- (void).cxx_destruct;
- (id)dataToSignWithURLRequest:;
- (id)dataToSignWithURLResponse:responseData:;
- (id)copyWithZone:;
@end
