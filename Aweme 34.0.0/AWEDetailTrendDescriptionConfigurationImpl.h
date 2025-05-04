@interface AWEDetailTrendDescriptionConfigurationImpl : NSObject
@property (nonatomic) AWEDetailTrendDescriptionCell trendDescriptionCell;
@property (nonatomic) @? expandAction;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)expandAction;
- (void)setTrendDescriptionCell:;
- (void)setExpandAction:;
- (id)cellSizeWithDescriptionModel:;
- (void)configWithDescriptionModel:cell:;
- (id)trendDescriptionCell;
- (void)setIsExpanded:;
- (BOOL)isExpanded;
- (void).cxx_destruct;
@end
