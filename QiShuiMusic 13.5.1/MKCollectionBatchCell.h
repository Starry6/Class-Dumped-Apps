@interface MKCollectionBatchCell : UICollectionViewCell
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)setupConstraitns;
- (void)startedLoadingBatch;
- (void)finishedLoadingBatch;
+ (id)reuseIdentifier;
@end
