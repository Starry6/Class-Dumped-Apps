@interface IESLiveWalletRedeemItem : NSObject
@property (nonatomic) @? updateDataBlock;
@property (nonatomic) QueryIncomeResult income;
@property (nonatomic) NSArray redeemModels;
@property (nonatomic) double redeemHeight;
@property (nonatomic) double sectionWidth;
@property (nonatomic) double sectionHeight;
@property (nonatomic) @? redeemModelsDidUpdated;
- (id)updateDataBlock;
- (void)forceUpdateData;
- (id)createSectionControllerWithTrackInfo:;
- (id)diffIdentifier;
- (id)income;
- (id)initWithMyCoinModel:itemChangedBlock:updateDataBlock:;
- (BOOL)isEqualToDiffableObject:;
- (double)redeemHeight;
- (id)redeemModels;
- (id)redeemModelsDidUpdated;
- (double)sectionWidth;
- (void)setIncome:;
- (void)setRedeemHeight:;
- (void)setRedeemModels:;
- (void)setRedeemModelsDidUpdated:;
- (void)setSectionWidth:;
- (void)setUpdateDataBlock:;
- (void)updateRedeemModels;
- (void)updateRedeemModelsWithOriginRedeems:;
- (void).cxx_destruct;
- (double)sectionHeight;
- (void)setSectionHeight:;
@end
