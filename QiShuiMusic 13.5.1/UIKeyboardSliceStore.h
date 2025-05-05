@interface UIKeyboardSliceStore : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)sliceSetForID:;
- (void)addSet:;
+ (id)sharedStore;
+ (id)sliceSetForID:;
+ (id)sliceSetIDForKeyplaneName:type:orientation:;
+ (void)archiveSet:;
@end
