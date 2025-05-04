@interface AWEMessageReachTopTabVisibilityChangedResult : NSObject
@property (nonatomic) BOOL canShowBadge;
@property (nonatomic) BOOL canShowBubble;
@property (nonatomic) double tabVisiblePercent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowBadge;
- (BOOL)canShowBubble;
- (double)tabVisiblePercent;
- (void)setCanShowBubble:;
- (void)setCanShowBadge:;
- (void)setTabVisiblePercent:;
@end
