@interface AWEDCFeedAutoPlayBaseRule : NSObject
@property (nonatomic) AWEDCFeedAutoPlayHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)rulePriority;
- (double)__calculateRelativeCenterY:;
- (BOOL)enableRulePriorityOpti;
- (BOOL)enableCenterYOpti;
- (id)getAutoPlayViewFromViews:inContainer:contentOffset:directionPoint:speedPoint:scence:;
- (id)filterActivatableViewsFromViews:container:contentOffset:directionPoint:speedPoint:scence:;
- (id)determineBestAutoPlayViewFromActivatableViews:container:contentOffset:directionPoint:speedPoint:scence:;
- (id)container;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)activeRect;
- (unsigned long long)ruleType;
- (id)autoPlayConfig;
@end
