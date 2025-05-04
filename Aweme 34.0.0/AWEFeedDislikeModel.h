@interface AWEFeedDislikeModel : NSObject
@property (nonatomic) double time;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString searchQueryAll;
- (id)initWithAwemeModel:;
- (void)setSearchQueryAll:;
- (id)searchQueryAll;
- (double)time;
- (id)itemID;
- (void)setTime:;
- (void)setItemID:;
- (void).cxx_destruct;
@end
