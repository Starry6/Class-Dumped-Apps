@interface AWESplashBiddingTopviewStyleModel : MTLModel
@property (nonatomic) Q styleType;
@property (nonatomic) NSDictionary slideClickInfo;
@property (nonatomic) NSDictionary slideOnlyInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStyleType:;
- (id)slideClickInfo;
- (id)slideOnlyInfo;
- (void)setSlideClickInfo:;
- (void)setSlideOnlyInfo:;
- (unsigned long long)styleType;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
