@interface AWELivePreStreamLiveCardSectionConfig : NSObject
@property (nonatomic) double minimumInteritemSpacing;
@property (nonatomic) double headerHeight;
@property (nonatomic) double footerHeight;
@property (nonatomic) double cellHeight;
@property (nonatomic) {UIEdgeInsets=dddd} sectionInsets;
@property (nonatomic) q cardType;
@property (nonatomic) NSString enterMethod;
- (void)setEnterMethod:;
- (id)enterMethod;
- (double)headerHeight;
- (void).cxx_destruct;
- (double)minimumInteritemSpacing;
- (id)sectionInsets;
- (void)setMinimumInteritemSpacing:;
- (void)setSectionInsets:;
- (void)setHeaderHeight:;
- (double)cellHeight;
- (long long)cardType;
- (void)setCardType:;
- (void)setCellHeight:;
- (void)setFooterHeight:;
- (double)footerHeight;
@end
