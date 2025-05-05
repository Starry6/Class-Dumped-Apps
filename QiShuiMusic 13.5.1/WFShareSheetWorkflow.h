@interface WFShareSheetWorkflow : NSObject
@property (nonatomic) S glyphCharacter;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
@property (nonatomic) ^{CGImage=} iconImage;
@property (nonatomic) double iconScale;
- (void)dealloc;
- (double)iconScale;
- (id)identifier;
- (id)initWithCoder:;
- (unsigned short)glyphCharacter;
- (void)setIconImage:scale:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)iconImage;
- (id)initWithIdentifier:name:glyphCharacter:;
+ (BOOL)supportsSecureCoding;
@end
