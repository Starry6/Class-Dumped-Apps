@interface AWEIMMessageTabCleanConfigManager : NSObject
- (id)cellTailComponentsIfCleanNeed:;
- (BOOL)isSilverWingCellWithContext:;
- (id)silverWingCellTailComponents:;
- (id)allCellTailComponents:;
+ (id)sharedIntance;
@end
