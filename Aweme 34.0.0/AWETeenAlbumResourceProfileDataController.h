@interface AWETeenAlbumResourceProfileDataController : AWEListDataController
@property (nonatomic) NSString title;
@property (nonatomic) NSString introduction;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) NSString resourceID;
@property (nonatomic) Q cursor;
@property (nonatomic) NSString pageToken;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)cover;
- (void)setCover:;
- (id)introduction;
- (void)setIntroduction:;
- (id)pageToken;
- (void)setPageToken:;
- (id)initWithResourceID:;
- (void)p_fetchWithPullType:completion:;
- (unsigned long long)cursor;
- (id)resourceID;
- (void)setCursor:;
- (void)setResourceID:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)title;
- (void)setTitle:;
@end
