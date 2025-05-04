@interface AWELiveVSTabServiceImp : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)vsTabName;
- (id)createVSTabViewController;
- (void)performAppendVSTab:;
- (void)performLayoutFeedSegmentControl:;
- (BOOL)vsTabIsShowRightSideOfNearBy;
- (BOOL)vsTabIsShowLeftSideOfNearBy;
+ (id)sharedInstance;
@end
