@interface IESECGoodsDetailTipsSectionModel : NSObject
@property (nonatomic) NSArray tips;
@property (nonatomic) NSArray tipsObject;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) NSArray tipsModel;
- (void)addTipsFromArray:;
- (void)setTipsModel:;
- (void)setTipsObject:;
- (id)tipsModel;
- (id)tipsObject;
- (id)tips;
- (void)setTips:;
- (void).cxx_destruct;
- (id)sectionTitle;
- (void)setSectionTitle:;
@end
