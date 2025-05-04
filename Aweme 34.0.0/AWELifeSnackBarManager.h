@interface AWELifeSnackBarManager : NSObject
@property (nonatomic) NSDictionary lifeSnackbarHandles;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)snackBarHandleWithPageType:;
- (id)grouponSnackBarHandle;
- (void)handleVideoPlayFinish:;
- (void)handleLifeAnchorClick:;
- (id)lifeSnackbarHandles;
- (id)nearbySnackBarHandle;
- (void)setLifeSnackbarHandles:;
- (id)init;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (void)addObservers;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
