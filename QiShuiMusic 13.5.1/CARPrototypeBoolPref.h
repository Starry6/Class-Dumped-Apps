@interface CARPrototypeBoolPref : CARPrototypePref
@property (nonatomic) BOOL invertValueForState;
@property (nonatomic) BOOL valueBool;
@property (nonatomic) BOOL cachedValueBool;
- (void)setState:;
- (BOOL)state;
- (id)description;
- (BOOL)cachedState;
- (void)setCachedState:;
- (BOOL)invertValueForState;
- (BOOL)valueBool;
- (BOOL)cachedValueBool;
+ (id)prefWithDomain:key:title:invertValueForState:valueChangedBlock:;
@end
