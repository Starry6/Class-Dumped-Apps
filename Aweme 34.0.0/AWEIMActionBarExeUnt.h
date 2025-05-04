@interface AWEIMActionBarExeUnt : MTLModel
@property (nonatomic) NSString actionBarKey;
@property (nonatomic) NSNumber exitDuration;
@property (nonatomic) NSArray exitSceneArray;
@property (nonatomic) NSString exitDimension;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)exitDuration;
- (void)setExitDuration:;
- (id)actionBarKey;
- (id)exitSceneArray;
- (id)exitDimension;
- (double)getSecondsExitDuration;
- (BOOL)isConversionDimension;
- (id)getConDimensionLocalExtKey;
- (void)setActionBarKey:;
- (void)setExitSceneArray:;
- (void)setExitDimension:;
- (void).cxx_destruct;
- (BOOL)isDataValid;
+ (id)JSONKeyPathsByPropertyKey;
@end
