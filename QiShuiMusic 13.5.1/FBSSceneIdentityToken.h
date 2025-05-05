@interface FBSSceneIdentityToken : NSObject
@property (nonatomic) BSServiceConnectionEndpoint endpoint;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString stringRepresentation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)stringRepresentation;
- (void)encodeWithXPCDictionary:;
- (id)initWithBSXPCCoder:;
- (id)identifier;
- (id)initWithIdentifier:workspace:endpoint:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:;
- (id)endpoint;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
@end
