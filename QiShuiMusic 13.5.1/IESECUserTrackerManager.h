@interface IESECUserTrackerManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)enterToPage:;
+ (void)hidePendantIfNeedFromPage:;
+ (void)initTrackerModule;
+ (void)leaveFromPage:;
+ (void)postAction:type:atPage:;
+ (void)registerPendantDataChangedListener:pageID:callback:;
+ (void)registerPendantStatusChangedListener:pageID:callback:;
+ (void)showPendantIfNeededAtPage:;
+ (void)unRegisterPendantDataChangedListener:pageID:;
+ (void)unRegisterPendantStatusChangedListener:pageID:;
@end
