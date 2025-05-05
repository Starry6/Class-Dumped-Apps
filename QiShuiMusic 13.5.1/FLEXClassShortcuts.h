@interface FLEXClassShortcuts : FLEXShortcutsSection
@property (nonatomic) # cls;
- (Class)cls;
- (void).cxx_destruct;
+ (id)forObject:;
+ (id)shortNameForBundlePath:;
@end
