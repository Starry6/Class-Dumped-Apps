@interface AWEEntertainmentTabMoreButtonBubbleManager : NSObject
@property (nonatomic) BOOL canShow;
- (BOOL)canShow;
- (void)setCanShow:;
+ (id)sharedManager;
@end
