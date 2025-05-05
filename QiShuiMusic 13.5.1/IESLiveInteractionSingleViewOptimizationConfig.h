@interface IESLiveInteractionSingleViewOptimizationConfig : NSObject
@property (nonatomic) Q scene;
@property (nonatomic) q UILayout;
@property (nonatomic) q slotsCount;
- (long long)UILayout;
- (id)initWithScene:UILayout:;
- (id)initWithScene:UILayout:slotsCount:;
- (long long)slotsCount;
- (unsigned long long)scene;
- (id)description;
- (BOOL)isEqual:;
+ (id)configWithScene:;
+ (id)configWithScene:UILayout:;
+ (id)configWithScene:UILayout:slotsCount:;
@end
