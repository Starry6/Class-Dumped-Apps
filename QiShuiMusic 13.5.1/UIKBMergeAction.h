@interface UIKBMergeAction : NSObject
@property (nonatomic) NSString remainingKeyName;
@property (nonatomic) NSString disappearingKeyName;
@property (nonatomic) NSArray orderedKeyList;
@property (nonatomic) UIKBGeometry factors;
- (id)remainingKeyName;
- (void)setDisappearingKeyName:;
- (void)setFactors:;
- (void).cxx_destruct;
- (id)factors;
- (void)setOrderedKeyList:;
- (void)setRemainingKeyName:;
- (id)orderedKeyList;
- (id)disappearingKeyName;
- (id)copyWithZone:;
+ (id)mergeActionWithRemainingKeyName:disappearingKeyName:factors:;
+ (id)mergeActionWithOrderedKeyList:factors:;
@end
