@interface CUPairedPeer : NSObject
@property (nonatomic) NSDate dateModified;
@property (nonatomic) NSString identifierStr;
@property (nonatomic) NSDictionary acl;
@property (nonatomic) NSData altIRK;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) NSDictionary info;
@property (nonatomic) NSString label;
@property (nonatomic) NSString model;
@property (nonatomic) NSString name;
@property (nonatomic) NSData publicKey;
- (void)setAcl:;
- (id)model;
- (void)setAltIRK:;
- (void)setName:;
- (void)setModel:;
- (id)publicKey;
- (void)setPublicKey:;
- (id)identifierStr;
- (void)setInfo:;
- (id)identifier;
- (void)setLabel:;
- (id)initWithCoder:;
- (id)label;
- (id)altIRK;
- (void)setIdentifierStr:;
- (id)acl;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (id)name;
- (id)detailedDescription;
- (void)setIdentifier:;
- (id)dateModified;
- (void)setDateModified:;
+ (BOOL)supportsSecureCoding;
@end
