@interface AWECommonFeedPlaceholderCell : UICollectionViewCell
@property (nonatomic) <AWECommonFeedCellModelProtocol> cellModel;
@property (nonatomic) AWECommonFeedSectionContext context;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCellModel:;
- (void)configCellWithContext:cellModel:;
- (BOOL)hasVideo;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)cellModel;
@end
