@interface AWEPostLayoutManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (BOOL)enableWaterfallSwitch;
+ (BOOL)userHomePageUseWaterfall;
+ (long long)getLayoutStyle;
+ (void)updateLayoutStyle:completion:;
+ (id)postLayoutCacheKey;
+ (void)trackLayoutChangeRequest:error:;
+ (id)storageKeyForCurrentUser:;
+ (void)setLayoutStyle:;
@end
