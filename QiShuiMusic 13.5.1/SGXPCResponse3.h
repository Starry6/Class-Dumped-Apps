@interface SGXPCResponse3 : SGXPCResponse2
@property (nonatomic) <NSSecureCoding> response3;
- (id)initWithCoder:;
- (id)response3;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)response2;
- (id)response1;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithError:;
+ (id)responseWith:also:also:;
@end
