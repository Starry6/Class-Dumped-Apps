@interface AWEPOIPadAdapterManager : NSObject
@property (nonatomic) double contentWidth;
- (id)aAWEPadBizUIAdapter;
- (id)bizGlobalParamsWithParams:;
- (void)updateContentWidthWithContainerWidth:isPadSplitting:;
- (id)init;
- (void)setContentWidth:;
- (double)contentWidth;
+ (Class)aAWEPadBizUIAdapterClass;
+ (BOOL)shouldBeAdaptedToPad;
+ (id)sharedManager;
@end
