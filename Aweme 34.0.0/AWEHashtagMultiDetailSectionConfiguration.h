@interface AWEHashtagMultiDetailSectionConfiguration : AWEMultiColumnFeedSectionConfiguration
@property (nonatomic) BOOL isHalfScreen;
- (void)configCell:index:model:;
- (Class)cellClassForModel:index:;
- (id)sizeForItemAtIndex:model:collectionViewSize:;
- (void)setIsHalfScreen:;
- (BOOL)isHalfScreen;
- (id)initWithIsHalfScreen:;
- (id)inset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
