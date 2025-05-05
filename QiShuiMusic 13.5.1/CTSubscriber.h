@interface CTSubscriber : NSObject
@property (nonatomic) CTServiceDescriptor descriptor;
@property (nonatomic) NSData carrierToken;
@property (nonatomic) NSString identifier;
@property (nonatomic) <CTSubscriberDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descriptor;
- (id)init;
- (id)initWithDescriptor:;
- (void)setDescriptor:;
- (void)setDelegate:;
- (id)identifier;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)authTokenChanged:;
- (id)initWithDescriptor:client:;
- (id)carrierToken;
- (BOOL)refreshCarrierToken;
- (void)authenticate:completion:;
- (void)authenticateWithInfo:handleResult:;
- (id)typeAllocationCode;
@end
