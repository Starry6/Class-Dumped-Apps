@interface AWERLComponentBuildParams : NSObject
@property (nonatomic) NSSet updatedComponents;
@property (nonatomic) BOOL useDiff;
- (void)setUseDiff:;
- (id)updatedComponents;
- (void)setUpdatedComponents:;
- (BOOL)useDiff;
- (void).cxx_destruct;
@end
