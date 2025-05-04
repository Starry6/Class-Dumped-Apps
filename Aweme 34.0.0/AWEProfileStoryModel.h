@interface AWEProfileStoryModel : AWEBaseApiModel
@property (nonatomic) NSArray unreadStoryIDs;
@property (nonatomic) Q timeToLiveStoryStatus;
- (id)unreadStoryIDs;
- (void)setUnreadStoryIDs:;
- (unsigned long long)timeToLiveStoryStatus;
- (void)setTimeToLiveStoryStatus:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
