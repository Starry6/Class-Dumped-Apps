@interface SFAppAutoShortcutsItem : NSObject
@property (nonatomic) NSString bundleIdentifier;
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
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
