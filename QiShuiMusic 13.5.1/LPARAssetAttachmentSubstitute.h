@interface LPARAssetAttachmentSubstitute : LPARAsset
@property (nonatomic) q index;
- (id)initWithCoder:;
- (long long)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (BOOL)_isSubstitute;
- (id)initWithARAsset:;
+ (BOOL)supportsSecureCoding;
@end
