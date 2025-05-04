@interface AWEUserProfileSearchTrack : NSObject
@property (nonatomic) NSDictionary trackerParam;
@property (nonatomic) NSString searchResultId;
@property (nonatomic) BOOL fromTopButton;
- (id)searchResultId;
- (void)setSearchResultId:;
- (id)trackerParam;
- (void)setTrackerParam:;
- (void)setFromTopButton:;
- (id)searchFollowEvent;
- (BOOL)fromTopButton;
- (void).cxx_destruct;
@end
