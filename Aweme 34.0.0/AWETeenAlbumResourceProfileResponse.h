@interface AWETeenAlbumResourceProfileResponse : AWEBaseApiModel
@property (nonatomic) NSArray albumList;
@property (nonatomic) NSString title;
@property (nonatomic) NSString introduction;
@property (nonatomic) AWEURLModel cover;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) Q cursor;
@property (nonatomic) NSString pageToken;
- (id)cover;
- (void)setCover:;
- (id)introduction;
- (void)setIntroduction:;
- (void)setAlbumList:;
- (id)pageToken;
- (void)setPageToken:;
- (unsigned long long)cursor;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)albumList;
+ (id)coverJSONTransformer;
+ (id)albumListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
