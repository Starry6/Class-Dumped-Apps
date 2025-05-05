@interface CPContact : NSObject
@property (nonatomic) CPContactEntity contactEntity;
@property (nonatomic) NSString name;
@property (nonatomic) UIImage image;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSString informativeText;
- (id)informativeText;
- (void)setInformativeText:;
- (void)setName:;
- (void)setActions:;
- (void)setImage:;
- (void)setSubtitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)actions;
- (void).cxx_destruct;
- (id)subtitle;
- (id)name;
- (id)image;
- (id)contactEntity;
- (void)setContactEntity:;
- (id)initWithName:image:;
+ (BOOL)supportsSecureCoding;
@end
