@interface CLSArchivedSliderAnswerFormat : CLSArchivedAnswerFormat
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) q type;
@property (nonatomic) q maximum;
@property (nonatomic) q minimum;
@property (nonatomic) NSString leadingValueLabel;
@property (nonatomic) NSString trailingValueLabel;
@property (nonatomic) NSString midValueLabel;
- (id)init;
- (long long)minimum;
- (long long)maximum;
- (void)setType:;
- (void)setMinimum:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)type;
- (void).cxx_destruct;
- (void)setMaximum:;
- (id)leadingValueLabel;
- (void)setLeadingValueLabel:;
- (id)trailingValueLabel;
- (void)setTrailingValueLabel:;
- (id)midValueLabel;
- (void)setMidValueLabel:;
+ (BOOL)supportsSecureCoding;
+ (id)relations;
@end
