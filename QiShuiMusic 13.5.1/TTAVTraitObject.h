@interface TTAVTraitObject : NSObject
@property (nonatomic) q nativeObj;
@property (nonatomic) NSInteger type;
@property (nonatomic) NSInteger version;
- (BOOL)sameAs:;
- (void)saveRecycleObj:;
- (id)getRecycleObj;
- (id)initWithType:andObj:;
- (id)initWithType:andVersion:;
- (long long)nativeObj;
- (void)releaseObj;
- (void)setNativeObj:;
- (long long)takeNativeObj;
- (void)dealloc;
- (int)version;
- (int)type;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
