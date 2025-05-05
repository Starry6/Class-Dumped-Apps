@interface LARightStore : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
- (void)rightForIdentifier:completion:;
- (void)saveRight:identifier:completion:;
- (void)saveRight:identifier:secret:completion:;
- (void)removeRight:completion:;
- (void)removeRightForIdentifier:completion:;
- (void)removeAllRightsWithCompletion:;
+ (id)sharedStore;
@end
