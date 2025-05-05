@interface SWCollaborationOption : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString subtitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) NSArray requiredOptionsIdentifiers;
- (id)init;
- (id)identifier;
- (void)setSelected:;
- (id)initWithTitle:identifier:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (BOOL)isSelected;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)subtitle;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithTitle:identifier:subtitle:selected:requiredOptionsIdentifiers:;
- (BOOL)isEqualToCollaborationOption:;
- (id)requiredOptionsIdentifiers;
- (void)setRequiredOptionsIdentifiers:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)optionWithTitle:identifier:;
@end
