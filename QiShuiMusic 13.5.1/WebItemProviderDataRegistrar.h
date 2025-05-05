@interface WebItemProviderDataRegistrar : NSObject
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) NSData data;
@property (nonatomic) <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic) NSString typeIdentifierForClient;
@property (nonatomic) NSData dataForClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)data;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (id)initWithData:type:;
- (void)registerItemProvider:;
- (id)typeIdentifierForClient;
- (id)dataForClient;
@end
