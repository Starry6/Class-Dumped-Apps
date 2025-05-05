@interface PHFetchResultMediaTypeCounts : NSObject
@property (nonatomic) Q photosCount;
@property (nonatomic) Q videosCount;
@property (nonatomic) Q audiosCount;
- (unsigned long long)videosCount;
- (unsigned long long)photosCount;
- (id)initWithPhotosCount:videosCount:audiosCount:;
- (unsigned long long)audiosCount;
+ (id)mediaTypeCountsWithPhotosCount:videosCount:audiosCount:;
@end
