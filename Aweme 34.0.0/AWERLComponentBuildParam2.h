@interface AWERLComponentBuildParam2 : NSObject
@property (nonatomic) NSSet dirtyComponents;
@property (nonatomic) BOOL useDiff;
- (void)setUseDiff:;
- (void)setDirtyComponents:;
- (BOOL)useDiff;
- (id)dirtyComponents;
- (void).cxx_destruct;
@end
