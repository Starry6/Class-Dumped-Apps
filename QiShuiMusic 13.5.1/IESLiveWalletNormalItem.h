@interface IESLiveWalletNormalItem : NSObject
@property (nonatomic) NSArray cellModels;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) double sectionWidth;
@property (nonatomic) q numOfItemInRow;
@property (nonatomic) BOOL isInMyCoinView;
- (id)cellModels;
- (id)createSectionControllerWithTrackInfo:;
- (id)diffIdentifier;
- (id)initWithMyCoinModel:itemChangedBlock:updateDataBlock:;
- (BOOL)isEqualToDiffableObject:;
- (BOOL)isInMyCoinView;
- (long long)numOfItemInRow;
- (double)sectionWidth;
- (void)setIsInMyCoinView:;
- (void)setNumOfItemInRow:;
- (void)setSectionWidth:;
- (BOOL)isAvailable;
- (void).cxx_destruct;
@end
