@interface SGXPCResponse : NSObject
@property (nonatomic) NSError error;
- (id)initWithError:;
- (id)error;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
+ (id)responseWithError:;
+ (id)response;
@end
