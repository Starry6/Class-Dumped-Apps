@interface AWEFeedLongVideoManager : NSObject
@property (nonatomic) NSMutableDictionary longVideoFlagsMap;
@property (nonatomic) q currentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentType:;
- (void)tabBarController:didSelectItemType:previousItemType:;
- (id)longVideoFlagsMap;
- (void)setLongVideoFlagsMap:;
- (void).cxx_destruct;
- (long long)currentType;
+ (void)markFeedLongVideo;
+ (void)clearFeedLongVideoMark;
+ (BOOL)isFeedLongVideoMarked;
+ (id)sharedManager;
@end
