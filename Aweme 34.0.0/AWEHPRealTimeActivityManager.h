@interface AWEHPRealTimeActivityManager : NSObject
@property (nonatomic) <AWEHPRealTimeActivityDelegate> delegate;
@property (nonatomic) NSString entryID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onActivityEnter:aheadTime:;
- (void)onActivityStop:;
- (void)onActivityDataChanged:allData:;
- (id)getCommonTrackingParams;
- (id)getDefaultActivityData;
- (id)getProcessActivityResourceWithError:;
- (id)getResourceWithResourceID:cycleID:error:;
- (void)trackActivityStatusErrorWithParams:;
- (unsigned long long)p_getActivityStateWithResourceID:cycleID:;
- (void)callStateCallBackWithEntryID:;
- (void)callDataChangedCallbackWithEntryID:;
- (id)p_getDefaultActivityData;
- (id)p_getResourceWithResourceID:cycleId:;
- (id)p_getProcessActivityResource;
- (void)registerDelegate:;
- (id)delegate;
- (id)entryID;
- (void).cxx_destruct;
- (void)setDelegate:;
- (id)initWithEntryID:;
+ (id)generateActivityManagerWithEntryID:;
@end
