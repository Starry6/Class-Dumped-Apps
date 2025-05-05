@interface SFRSASigningOperation : NSObject
@property (nonatomic) _SFRSAKeySpecifier signingKeySpecifier;
@property (nonatomic) <SFDigestOperation> digestOperation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setSigningKeySpecifier:;
- (id)signingKeySpecifier;
- (id)sign:withKey:error:;
- (id)initWithKeySpecifier:;
- (id)verify:withKey:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setDigestOperation:;
- (id)initWithKeySpecifier:digestOperation:;
- (id)digestOperation;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
