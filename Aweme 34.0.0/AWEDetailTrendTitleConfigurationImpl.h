@interface AWEDetailTrendTitleConfigurationImpl : NSObject
@property (nonatomic) AWEDetailTrendTitleCell trendTitleCell;
@property (nonatomic) AWEDetailTrendHeadTitleModel titleModel;
@property (nonatomic) IESServiceProvider provider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)titleModel;
- (void)setTitleModel:;
- (id)cellSizeForObject:;
- (void)configWithModel:cell:serviceProvider:;
- (void)updateTrendTitleWithCount:;
- (void)clickTag;
- (void)setTrendTitleCell:;
- (id)trendTitleCell;
- (void)setProvider:;
- (void).cxx_destruct;
- (id)provider;
@end
