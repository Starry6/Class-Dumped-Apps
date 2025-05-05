@interface SAGKVideoPod : SAGKPodView
@property (nonatomic) NSArray videos;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)videos;
- (void)setVideos:;
+ (id)videoPod;
+ (id)videoPodWithDictionary:context:;
@end
