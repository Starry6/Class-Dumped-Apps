@interface AWEShowEntertainmentCommentUtils : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldShowEntertainmentCommentTab:;
- (void)trackEntertainmentCommentTabEventName:awemeModel:params:;
- (id)entertainmentCommentViewControllerWithAwemeModel:extraParams:;
- (long long)getEntertainmentTabCommentCount:;
- (id)getEntertainmentCommentTabTypeTitle:;
- (long long)getEntertainmentCommentTabMediaType:;
- (BOOL)enableContinueVideoPlay;
- (id)getCommonParamsWithAwemeModel:;
- (id)getEntertainmentCommentTabLynxViewSchema:;
- (id)getParamsWithAwemeModel:params:;
@end
