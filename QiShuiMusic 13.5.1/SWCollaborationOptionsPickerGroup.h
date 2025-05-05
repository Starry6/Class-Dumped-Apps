@interface SWCollaborationOptionsPickerGroup : SWCollaborationOptionsGroup
@property (nonatomic) NSString selectedOptionIdentifier;
- (void)setOptions:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)selectedOptionIdentifier;
- (void)setSelectedOptionIdentifier:;
- (id)initWithIdentifier:options:;
- (id)_defaultSelectedOptionIdentifier;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
@end
