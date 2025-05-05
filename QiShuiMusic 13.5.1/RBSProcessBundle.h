@interface RBSProcessBundle : NSObject
@property (nonatomic) RBSProcessInstance instance;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString path;
@property (nonatomic) NSString executablePath;
@property (nonatomic) NSString extensionPointIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)executablePath;
- (id)path;
- (id)instance;
- (void)setInstance:;
- (id)initWithRBSXPCCoder:;
- (id)extensionPointIdentifier;
- (id)bundleInfoValueForKey:;
- (void)encodeWithRBSXPCCoder:;
- (id)identifier;
- (id)debugDescription;
- (void).cxx_destruct;
- (id)description;
- (id)bundleInfoValuesForKeys:;
+ (BOOL)supportsRBSXPCSecureCoding;
+ (id)bundleWithDataSource:;
@end
