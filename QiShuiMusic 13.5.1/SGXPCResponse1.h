@interface SGXPCResponse1 : SGXPCResponse
@property (nonatomic) <NSSecureCoding> response1;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setResponse1:;
- (void).cxx_destruct;
- (id)response1;
+ (BOOL)supportsSecureCoding;
+ (id)responseWith:;
+ (id)responseWithError:;
@end
