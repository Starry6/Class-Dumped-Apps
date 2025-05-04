@interface AWEVideoPreloadManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadVideo:withGroup:;
- (void)cancelVideosPreloadWithGroup:;
+ (id)sharedInstance;
@end
