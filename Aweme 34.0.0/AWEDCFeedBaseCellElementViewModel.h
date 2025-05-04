@interface AWEDCFeedBaseCellElementViewModel : NSObject
@property (nonatomic) AWEAwemeModel awemeModel;
@property (nonatomic) AWEDCFeedPageContext context;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)refreshWithAwemeModel:;
- (id)initWithContext:;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
@end
