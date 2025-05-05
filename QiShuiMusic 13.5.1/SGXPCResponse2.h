@interface SGXPCResponse2 : SGXPCResponse1
@property (nonatomic) <NSSecureCoding> response2;
- (id)initWithCoder:;
- (void)setResponse2:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)response2;
- (id)response1;
+ (BOOL)supportsSecureCoding;
+ (id)responseWith:also:;
+ (id)responseWithError:;
@end
