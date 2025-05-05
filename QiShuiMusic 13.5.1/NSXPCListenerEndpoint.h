@interface NSXPCListenerEndpoint : NSObject
- (void)encodeWithXPCDictionary:;
- (id)initWithBSXPCCoder:;
- (id)initWithXPCDictionary:;
- (void)encodeWithBSXPCCoder:;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_initWithConnection:;
- (id)_endpoint;
- (void)_setEndpoint:;
+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
@end
