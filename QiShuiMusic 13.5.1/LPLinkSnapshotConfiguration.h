@interface LPLinkSnapshotConfiguration : NSObject
@property (nonatomic) UITraitCollection traitCollection;
@property (nonatomic) Q preferredSizeClass;
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) {CGSize=dd} maximumSize;
@property (nonatomic) double scale;
- (id)init;
- (id)traitCollection;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)maximumSize;
- (double)scale;
- (id)size;
- (unsigned long long)preferredSizeClass;
- (id)initWithTraitCollection:preferredSizeClass:maximumSize:scale:;
- (id)initWithTraitCollection:preferredSizeClass:size:scale:;
+ (BOOL)supportsSecureCoding;
@end
