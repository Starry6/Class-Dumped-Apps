@interface IAVDHierarchyViewConfiguration : NSObject
@property (nonatomic) NSNumber maxDepth;
@property (nonatomic) UIFont nameFont;
@property (nonatomic) UIFont frameFont;
@property (nonatomic) NSArray lineColors;
@property (nonatomic) double lineWidth;
@property (nonatomic) double lineSpacing;
- (id)frameFont;
- (void)setFrameFont:;
- (void)setLineWidth:;
- (id)init;
- (double)lineWidth;
- (id)maxDepth;
- (void).cxx_destruct;
- (void)setMaxDepth:;
- (double)lineSpacing;
- (void)setLineSpacing:;
- (void)setNameFont:;
- (id)nameFont;
- (id)lineColors;
- (void)setLineColors:;
@end
