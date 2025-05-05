@interface IESECSliceXAnimationUtil : NSObject
+ (long long)getFrameAnimationStateWithElementView:animationName:;
+ (id)getOldValueForProperty:elementView:;
+ (BOOL)isSliceKeyExistedWithElementView:;
+ (void)markFrameAnimationStateWithElementView:animationName:state:;
+ (BOOL)needToTransitionAnimateOnElementView:transitionProperty:sliceXStyle:;
+ (void)storeNewValueForProperty:value:elementView:;
+ (id)valueStorageKeyForProperty:;
@end
