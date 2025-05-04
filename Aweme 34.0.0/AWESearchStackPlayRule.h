@interface AWESearchStackPlayRule : NSObject
@property (nonatomic) AWESearchAutoPlayHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAutoPlayViewFromViews:inContainer:contentOffset:directionPoint:speedPoint:;
- (unsigned long long)ruleType;
@end
