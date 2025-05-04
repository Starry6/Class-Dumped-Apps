@interface AWESearchHorizontalPlayRule : NSObject
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} activeRect;
@property (nonatomic) UIView<AWESearchAutoPlayCardProtocol> wantToPlayCard;
@property (nonatomic) AWESearchAutoPlayHandler handler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getAutoPlayViewFromViews:inContainer:contentOffset:directionPoint:speedPoint:;
- (id)wantToPlayCard;
- (void)setWantToPlayCard:;
- (void).cxx_destruct;
- (id)activeRect;
- (void)setActiveRect:;
- (unsigned long long)ruleType;
@end
