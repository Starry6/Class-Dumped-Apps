@interface LNConnectionAction : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) q metadataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)encodeWithXPCDictionary:;
- (id)identifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithXPCDictionary:;
- (long long)metadataVersion;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:metadataVersion:;
+ (BOOL)supportsSecureCoding;
@end
