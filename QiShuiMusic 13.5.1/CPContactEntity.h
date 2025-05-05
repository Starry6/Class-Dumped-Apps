@interface CPContactEntity : CPEntity
@property (nonatomic) NSString name;
@property (nonatomic) CPImageSet imageSet;
@property (nonatomic) NSArray actionButtons;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString informativeText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)informativeText;
- (void)setInformativeText:;
- (void)setName:;
- (void)setSubtitle:;
- (void)setActionButtons:;
- (id)initWithCoder:;
- (id)objectForIdentifier:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)actionButtons;
- (id)description;
- (id)subtitle;
- (id)name;
- (BOOL)isEqual:;
- (id)imageSet;
- (void)setImageSet:;
- (id)initWithName:imageSet:;
+ (BOOL)supportsSecureCoding;
@end
