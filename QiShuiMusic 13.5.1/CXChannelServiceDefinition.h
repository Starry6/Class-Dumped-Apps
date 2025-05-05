@interface CXChannelServiceDefinition : NSObject
@property (nonatomic) Protocol clientXPCInterface;
@property (nonatomic) Protocol serverXPCInterface;
@property (nonatomic) NSString name;
@property (nonatomic) CXServiceDomain domain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientXPCInterface;
- (id)serverXPCInterface;
- (id)name;
- (id)domain;
@end
