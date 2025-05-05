@interface SFHMACPseudoRandomFunction : NSObject
@property (nonatomic) <SFDigestOperation> digestOperation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDigestOperation:;
- (id)digestOperation;
- (id)copyWithZone:;
- (id)initWithDigestOperation:;
- (id)generateBytesWithLength:key:error:;
+ (BOOL)supportsSecureCoding;
@end
