@interface LPVideoAttachmentSubstitute : LPVideo
@property (nonatomic) q index;
- (id)initWithCoder:;
- (long long)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (BOOL)_isSubstitute;
- (id)initWithVideo:;
+ (BOOL)supportsSecureCoding;
@end
