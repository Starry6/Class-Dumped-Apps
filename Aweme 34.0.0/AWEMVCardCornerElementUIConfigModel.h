@interface AWEMVCardCornerElementUIConfigModel : MTLModel
@property (nonatomic) double leftOrRightMargin;
@property (nonatomic) double topOrBottomMargin;
@property (nonatomic) double iconSize;
@property (nonatomic) double textSize;
@property (nonatomic) double iconTextSpacing;
@property (nonatomic) q textWeight;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLeftOrRightMargin:;
- (void)setTopOrBottomMargin:;
- (double)topOrBottomMargin;
- (double)leftOrRightMargin;
- (double)iconTextSpacing;
- (void)setIconTextSpacing:;
- (void)setIconSize:;
- (double)iconSize;
- (double)textSize;
- (void)setTextWeight:;
- (long long)textWeight;
- (void)setTextSize:;
+ (id)JSONKeyPathsByPropertyKey;
@end
