@interface WebItemProviderPromisedFileRegistrar : NSObject
@property (nonatomic) NSString typeIdentifier;
@property (nonatomic) <NSItemProviderWriting> representingObjectForClient;
@property (nonatomic) NSString typeIdentifierForClient;
@property (nonatomic) NSData dataForClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)typeIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id).cxx_construct;
- (void)registerItemProvider:;
- (id)initWithType:callback:;
@end
