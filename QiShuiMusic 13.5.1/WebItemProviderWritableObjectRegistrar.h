@interface WebItemProviderWritableObjectRegistrar : NSObject
@property (nonatomic) <NSItemProviderWriting> representingObject;
@property (nonatomic) <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic) NSString typeIdentifierForClient;
@property (nonatomic) NSData dataForClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (void)registerItemProvider:;
- (id)representingObjectForClient;
- (id)representingObject;
@end
