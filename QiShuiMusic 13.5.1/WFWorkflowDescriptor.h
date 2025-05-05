@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor
@property (nonatomic) NSString name;
@property (nonatomic) q color;
@property (nonatomic) S glyphCharacter;
@property (nonatomic) ^{CGImage=} iconImage;
@property (nonatomic) double iconImageScale;
@property (nonatomic) NSString associatedAppBundleIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (void)setIconImage:scale:;
- (long long)color;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)associatedAppBundleIdentifier;
- (id)iconImage;
- (BOOL)isEqual:;
- (double)iconImageScale;
- (id)initWithIdentifier:name:color:glyphCharacter:associatedAppBundleIdentifier:;
- (id)externalURLForViewing;
+ (BOOL)supportsSecureCoding;
@end
