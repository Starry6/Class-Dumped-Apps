@interface SWCollaborationOptionsGroup : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString footer;
@property (nonatomic) NSArray options;
- (void)setOptions:;
- (id)identifier;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)options;
- (void)setFooter:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)footer;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithIdentifier:options:;
- (BOOL)isEqualToCollaborationOptionsGroup:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)optionsGroupWithIdentifier:options:;
@end
