@interface VKImageAnalysisBarButtonItem : VKSelectableBarButtonItem
@property (nonatomic) Q mode;
- (unsigned long long)mode;
- (void)setMode:;
+ (id)analysisButtonWithTarget:action:mode:;
+ (id)imageForMode:;
@end
