@interface AWEDanmakuPopoverDiggInfo : NSObject
@property (nonatomic) BOOL digged;
@property (nonatomic) BOOL needDiggPopoverGuide;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)needDiggPopoverGuide;
- (BOOL)digged;
- (void)setDigged:;
- (void)setNeedDiggPopoverGuide:;
- (id)diggGuideAnimation;
@end
