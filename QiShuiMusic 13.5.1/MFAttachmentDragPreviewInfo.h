@interface MFAttachmentDragPreviewInfo : NSObject
@property (nonatomic) UIImage image;
@property (nonatomic) BOOL isInlineImage;
@property (nonatomic) {CGPoint=dd} center;
@property (nonatomic) {CGSize=dd} displaySize;
- (id)center;
- (void)setCenter:;
- (void)setImage:;
- (id)initWithCoder:;
- (id)displaySize;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)image;
- (void)setDisplaySize:;
- (id)targetedDragPreviewInContainer:centerOffset:;
- (BOOL)isInlineImage;
- (void)setIsInlineImage:;
+ (BOOL)supportsSecureCoding;
@end
