@interface SFHMACOperation : SFMessageAuthenticationCodeOperation
@property (nonatomic) <SFDigestOperation> digestOperation;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDigestOperation:;
- (id)digestOperation;
- (id)initWithDigestOperation:;
@end
