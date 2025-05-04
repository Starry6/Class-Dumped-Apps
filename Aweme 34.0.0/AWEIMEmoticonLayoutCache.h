@interface AWEIMEmoticonLayoutCache : NSObject
@property (nonatomic) double viewWidth;
@property (nonatomic) {CGSize=dd} itemSize;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) NSInteger preferredColumn;
@property (nonatomic) NSInteger actualColumn;
- (void)setViewWidth:;
- (void)setPreferredColumn:;
- (void)setActualColumn:;
- (int)actualColumn;
- (int)preferredColumn;
- (double)interitemSpacing;
- (void)setInteritemSpacing:;
- (void)setLineSpacing:;
- (double)lineSpacing;
- (id)itemSize;
- (void)setItemSize:;
- (double)viewWidth;
@end
