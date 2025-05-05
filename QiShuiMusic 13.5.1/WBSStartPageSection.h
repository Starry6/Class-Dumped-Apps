@interface WBSStartPageSection : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL enabled;
- (id)identifier;
- (id)sectionWithEnabled:;
- (id)initWithCoder:;
- (id)initWithIdentifier:enabled:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEnabled;
+ (BOOL)supportsSecureCoding;
@end
