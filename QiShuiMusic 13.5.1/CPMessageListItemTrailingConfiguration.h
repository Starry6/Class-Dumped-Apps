@interface CPMessageListItemTrailingConfiguration : NSObject
@property (nonatomic) CPImageSet trailingImageSet;
@property (nonatomic) q trailingItem;
@property (nonatomic) UIImage trailingImage;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)trailingImage;
- (id)initWithTrailingItem:trailingImage:;
- (long long)trailingItem;
- (id)trailingImageSet;
- (void)setTrailingImageSet:;
+ (BOOL)supportsSecureCoding;
@end
