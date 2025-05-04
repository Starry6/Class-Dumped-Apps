@interface AWEHotSpotTTArticleContentCellViewController : AWEAwemeDetailCellViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isFirstRender;
- (double)loadArticleInterval;
- (BOOL)shouldRespondSingleClick;
- (BOOL)shouldRespondDoubleClick;
- (id)createInteractionController;
- (id)webVC;
@end
