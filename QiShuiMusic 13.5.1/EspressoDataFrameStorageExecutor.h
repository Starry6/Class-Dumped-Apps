@interface EspressoDataFrameStorageExecutor : NSObject
- (void)executeDataFrameStorage:withNetwork:block:blockPrepareForIndex:;
- (void)executeDataFrameStorage:withNetwork:referenceNetwork:block:blockPrepareForIndex:;
- (void)executeDataFrameStorage:withNetwork:block:;
@end
