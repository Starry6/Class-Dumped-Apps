@interface SALCMTvShow : SALCMContent
@property (nonatomic) NSString seriesName;
- (void)setSeriesName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)seriesName;
+ (id)tvShow;
+ (id)tvShowWithDictionary:context:;
@end
