@interface AWEDetailAwemeListConfigurationImpl : NSObject
@property (nonatomic) q numberOfCellsPerRow;
@property (nonatomic) {CGSize=dd} awemeCellSize;
@property (nonatomic) {CGSize=dd} lastCellSize;
@property (nonatomic) double minimumLineSpacing;
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) Q coverLoadOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)numberOfCellsPerRow;
- (void)setNumberOfCellsPerRow:;
- (id)awemeCellSize;
- (unsigned long long)coverLoadOptions;
- (void)configureAwemeCell:withModel:;
- (void)configureAwemeCell:withModel:coverLoadCompletion:;
- (void)configureAwemeCell:withItemModel:;
- (void)configureAwemeCell:withItemModel:coverLoadCompletion:;
- (void)configureLeftTopLabel:withItemModel:;
- (id)awemeCellSize:;
- (id)lastCellSize:;
- (long long)numberOfCellsPerRowWithSize:;
- (void)cellShowDigg:withModel:;
- (id)lastCellSize;
- (void)setAwemeCellSize:;
- (void)setLastCellSize:;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
@end
