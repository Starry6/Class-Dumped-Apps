@interface CTSIMToolkitMenu : NSObject
@property (nonatomic) NSString title;
@property (nonatomic) NSArray subTitles;
- (void)setTitle:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)title;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)subTitles;
- (void)setSubTitles:;
+ (BOOL)supportsSecureCoding;
@end
