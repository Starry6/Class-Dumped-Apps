@interface SBSConnectedDisplayInfo : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) BOOL mirrored;
@property (nonatomic) SBSRelativeDisplayArrangement arrangement;
@property (nonatomic) Q supportedScales;
@property (nonatomic) SBSDisplayModeSettings displayModeSettings;
- (id)identifier;
- (id)initWithCoder:;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isMirrored;
- (id)size;
- (unsigned long long)supportedScales;
- (id)initWithIdentifier:displayName:size:mirrored:supportedScales:displayModeSettings:arrangement:;
- (id)arrangement;
- (id)displayModeSettings;
+ (BOOL)supportsSecureCoding;
@end
