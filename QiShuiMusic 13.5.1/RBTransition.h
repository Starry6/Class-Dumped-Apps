@interface RBTransition : NSObject
@property (nonatomic) I method;
@property (nonatomic) I maxChanges;
@property (nonatomic) BOOL replaceable;
@property (nonatomic) NSArray effects;
@property (nonatomic) float addRemoveDuration;
- (void)setReplaceable:;
- (unsigned int)maxChanges;
- (id)effects;
- (unsigned int)method;
- (BOOL)isReplaceable;
- (void)setMaxChanges:;
- (unsigned long long)hash;
- (float)addRemoveDuration;
- (void)setAddRemoveDuration:;
- (void).cxx_destruct;
- (void)setMethod:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (void)addEffect:;
+ (id)defaultTransition;
@end
