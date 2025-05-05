@interface UIKBCachedImage : UIImage
@property (nonatomic) BOOL hasFormatColor;
@property (nonatomic) UIColor formatColor;
- (void)setFormatColor:;
- (BOOL)hasFormatColor;
- (id)formatColor;
+ (BOOL)supportsSecureCoding;
@end
