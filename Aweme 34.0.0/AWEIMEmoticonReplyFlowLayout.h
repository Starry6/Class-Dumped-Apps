@interface AWEIMEmoticonReplyFlowLayout : UICollectionViewFlowLayout
@property (nonatomic) Q column;
@property (nonatomic) Q row;
- (id)layoutAttributesForElementsInRect:;
- (unsigned long long)row;
- (unsigned long long)column;
- (void)setRow:;
- (void)setColumn:;
@end
