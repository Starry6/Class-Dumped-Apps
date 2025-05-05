@interface SSVShowDialogRequest : SSRequest
@property (nonatomic) NSObject<OS_xpc_object> encodedDialog;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithEncodedDialog:;
- (id)encodedDialog;
- (void)startWithDialogResponseBlock:;
@end
