@interface IESECTabKitTabBarIndicatorStyle : MTLModel
@property (nonatomic) Q displayMode;
@property (nonatomic) NSArray colors;
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)colors;
- (void)setColors:;
- (unsigned long long)displayMode;
- (void)setDisplayMode:;
- (void)setWidth:;
- (unsigned long long)height;
- (unsigned long long)width;
- (void)setHeight:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
