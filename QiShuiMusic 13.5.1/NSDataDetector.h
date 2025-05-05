@interface NSDataDetector : NSRegularExpression
@property (nonatomic) Q checkingTypes;
- (void)dealloc;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)pattern;
- (void)encodeWithCoder:;
- (unsigned long long)options;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPattern:options:error:;
- (unsigned long long)numberOfCaptureGroups;
- (void)enumerateMatchesInString:options:range:usingBlock:;
- (id)initWithTypes:error:;
- (unsigned long long)checkingTypes;
+ (BOOL)supportsSecureCoding;
+ (id)dataDetectorWithTypes:error:;
@end
