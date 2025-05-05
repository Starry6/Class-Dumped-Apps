@interface SAMPPodcast : SAMPMediaItem
@property (nonatomic) NSString seriesId;
@property (nonatomic) NSString seriesTitle;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)seriesId;
- (void)setSeriesId:;
- (id)seriesTitle;
- (void)setSeriesTitle:;
+ (id)podcast;
+ (id)podcastWithDictionary:context:;
@end
