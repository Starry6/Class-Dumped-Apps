@interface IESECHorizonFlowLayoutConfig : NSObject
@property (nonatomic) double collectionViewWidth;
@property (nonatomic) q layoutStyle;
@property (nonatomic) Q maxItemPerRow;
@property (nonatomic) double normalHorizontalSpace;
@property (nonatomic) double normalVerticalSpace;
- (double)collectionViewWidth;
- (unsigned long long)maxItemPerRow;
- (double)normalHorizontalSpace;
- (double)normalVerticalSpace;
- (void)setCollectionViewWidth:;
- (void)setMaxItemPerRow:;
- (void)setNormalHorizontalSpace:;
- (void)setNormalVerticalSpace:;
- (long long)layoutStyle;
- (void)setLayoutStyle:;
@end
