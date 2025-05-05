@interface SFLateSectionsAppendedFeedback : SFFeedback
@property (nonatomic) NSArray sections;
- (id)sections;
- (id)initWithSections:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setSections:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
