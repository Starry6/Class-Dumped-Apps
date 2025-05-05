@interface MTCoreMaterialVisualStylingProvider : NSObject
@property (nonatomic) NSString visualStyleSetName;
@property (nonatomic) <MTVisualStyleSetProviding> visualStyleSet;
@property (nonatomic) NSPointerArray observers;
- (void)removeObserver:;
- (void)_notifyObserversWithBlock:;
- (void)addObserver:;
- (id)_observers;
- (id)visualStylingForStyle:;
- (void)_setVisualStyleSet:;
- (BOOL)updateVisualStyleSetFromRecipe:andCategory:;
- (void).cxx_destruct;
- (id)_visualStyleSet;
- (void)setObservers:;
- (id)description;
- (id)visualStyleSetName;
- (BOOL)updateVisualStyleSetGeneratedFromRecipe:;
+ (BOOL)canGenerateVisualStyleSetFromRecipe:;
+ (id)coreMaterialVisualStylingProviderForStyleSetNamed:inBundle:;
+ (id)coreMaterialVisualStylingProviderForRecipe:andCategory:;
@end
