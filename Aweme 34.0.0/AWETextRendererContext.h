@interface AWETextRendererContext : NSObject
@property (nonatomic) NSAttributedString attributedText;
@property (nonatomic) NSAttributedString attributedTruncationText;
@property (nonatomic) Q maximumNumberOfLines;
@property (nonatomic) {CGSize=dd} constrainedSize;
@property (nonatomic) NSArray exclusionPaths;
@property (nonatomic) q lineBreakMode;
- (void)setConstrainedSize:;
- (id)constrainedSize;
- (id)attributedTruncationText;
- (void)setAttributedTruncationText:;
- (long long)lineBreakMode;
- (id)attributedText;
- (void)setMaximumNumberOfLines:;
- (unsigned long long)maximumNumberOfLines;
- (void)setLineBreakMode:;
- (void)setAttributedText:;
- (void).cxx_destruct;
- (id)exclusionPaths;
- (void)setExclusionPaths:;
@end
