@interface AWECodeGenAnchorAnimationModel : AWEBaseDataModel
@property (nonatomic) q type;
@property (nonatomic) q delay;
@property (nonatomic) q playProgress;
- (long long)playProgress;
- (void)setPlayProgress:;
- (void)setDelay:;
- (long long)type;
- (long long)delay;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
