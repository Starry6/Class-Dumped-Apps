@interface AWEBDARifleProcessor : NSObject
@property (nonatomic) AWEBDARifleView bdaRifleView;
@property (nonatomic) AWEBDARifleViewConfiguration config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdaRifleView;
- (void)setBdaRifleView:;
- (void)processRifle:withConfig:;
- (void)setConfig:;
- (id)config;
- (void).cxx_destruct;
+ (BOOL)shouldBeProcesseWithConfig:;
+ (unsigned long long)scene;
@end
