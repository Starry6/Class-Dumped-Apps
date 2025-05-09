@interface CLSOpenResponseAnswerFormat : CLSAnswerFormat
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) NSString teacherProvidedText;
@property (nonatomic) q minimumTextLength;
@property (nonatomic) q maximumTextLength;
@property (nonatomic) BOOL allowsMultimedia;
- (void)setType:;
- (void)setMinimum:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)initWithType:;
- (id)copyWithZone:;
- (void)mergeWithObject:;
- (BOOL)validateObject:;
- (id)initWithType:starterText:minimumLength:maximumLength:;
- (long long)maximumTextLength;
- (void)setMaximumTextLength:;
- (long long)minimumTextLength;
- (id)teacherProvidedText;
- (void)setTeacherProvidedText:;
- (void)setAllowsMultimedia:;
- (BOOL)allowsMultimedia;
- (void)setMinimumTextLength:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
