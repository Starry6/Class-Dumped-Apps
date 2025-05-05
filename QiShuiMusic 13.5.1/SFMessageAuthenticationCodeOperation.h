@interface SFMessageAuthenticationCodeOperation : NSObject
@property (nonatomic) _SFKeySpecifier signingKeySpecifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)sign:withKey:error:;
- (id)verify:withKey:error:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)_defaultMacOperation;
@end
