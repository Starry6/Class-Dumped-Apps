@interface AWEHPLottiePlayParams : MTLModel
@property (nonatomic) q repeatCount;
@property (nonatomic) q exitMode;
@property (nonatomic) q exitMinDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)exitMode;
- (void)setExitMode:;
- (long long)exitMinDuration;
- (void)setExitMinDuration:;
- (id)init;
- (BOOL)isValidWithError:;
- (void)setRepeatCount:;
- (id)description;
- (BOOL)isEqual:;
- (long long)repeatCount;
- (id)copyWithZone:;
+ (id)JSONKeyPathsByPropertyKey;
@end
