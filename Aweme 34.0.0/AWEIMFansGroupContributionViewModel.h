@interface AWEIMFansGroupContributionViewModel : NSObject
@property (nonatomic) AWEIMFansGroupContributionTemplateModel model;
@property (nonatomic) NSURL iconImage;
@property (nonatomic) NSString beyondDesc;
@property (nonatomic) NSString beyondDataText;
@property (nonatomic) BOOL shouldShowLineView;
@property (nonatomic) BOOL shouldCutToFit;
- (void)setShouldShowLineView:;
- (void)setShouldCutToFit:;
- (id)attrDesc;
- (id)beyondDataText;
- (id)beyondDesc;
- (BOOL)shouldShowLineView;
- (BOOL)shouldCutToFit;
- (id)sizeWithString:attributes:;
- (void)setBeyondDesc:;
- (void)setBeyondDataText:;
- (id)attributedStringWithTemplate:params:;
- (void)setModel:;
- (id)iconImage;
- (void)setIconImage:;
- (id)initWithModel:;
- (id)model;
- (void).cxx_destruct;
- (id)title;
- (double)cellHeight;
@end
