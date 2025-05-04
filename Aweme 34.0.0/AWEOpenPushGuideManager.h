@interface AWEOpenPushGuideManager : NSObject
@property (nonatomic) NSMapTable guidesInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guidesInfo;
- (void)setGuidesInfo:;
- (void).cxx_destruct;
+ (void)showGuideWithTitle:linkString:enterFrom:bottomOffset:category:onView:actionBlock:;
+ (void)showGuideWithTitle:linkString:enterFrom:bottomOffset:category:onView:withBottomExtended:actionBlock:;
+ (BOOL)checkShowupCondition;
+ (void)cleanupAllGuides;
+ (void)updateShowupCondition;
+ (void)_cleanupAllGuides;
+ (void)showGuideWithTitle:linkString:enterFrom:bottomOffset:category:actionBlock:;
+ (id)sharedInstance;
@end
