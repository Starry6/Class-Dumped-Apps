@interface AlignParam : NSObject
@property (nonatomic) double leftOffset;
@property (nonatomic) double topOffset;
- (void)SetAlignOffsetWithLeft:Top:;
- (double)leftOffset;
- (double)topOffset;
@end
