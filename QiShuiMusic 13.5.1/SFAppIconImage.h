@interface SFAppIconImage : SFImage
@property (nonatomic) NSString bundleIdentifier;
@property (nonatomic) NSInteger iconType;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) NSData imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) NSString contentType;
@property (nonatomic) NSString keyColor;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSInteger source;
@property (nonatomic) NSInteger cornerRoundingStyle;
@property (nonatomic) NSString accessibilityLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bundleIdentifier;
- (id)initWithProtobuf:;
- (id)initWithCoder:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setBundleIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (int)iconType;
- (void)setIconType:;
- (BOOL)hasIconType;
+ (BOOL)supportsSecureCoding;
@end
