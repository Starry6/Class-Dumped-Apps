@interface LPImageAttachmentSubstitute : LPImage
@property (nonatomic) q index;
- (id)initWithImage:;
- (id)initWithCoder:;
- (long long)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (BOOL)_isSubstitute;
+ (BOOL)supportsSecureCoding;
@end
