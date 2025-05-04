@interface AWEUserWorkMonetizeController : AWEUserWorkController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)monetizeScene;
- (id)monetizeContentReferString;
- (id)monetizeDataSource;
- (void)refreshMonetizeContent:reason:;
- (id)monetizeContentTrackParams;
- (void)refreshWithAwemes:;
- (void)containerViewDidLoad;
@end
