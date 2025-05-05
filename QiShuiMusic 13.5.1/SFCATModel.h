@interface SFCATModel : NSObject
@property (nonatomic) NSString catIdentifier;
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSData params;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIdentifier;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)params;
- (id)copyWithZone:;
- (void)setParams:;
- (id)catIdentifier;
- (void)setCatIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
