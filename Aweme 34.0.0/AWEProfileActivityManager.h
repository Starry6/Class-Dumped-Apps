@interface AWEProfileActivityManager : NSObject
@property (nonatomic) BOOL showProfileActivityTip;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setShowProfileActivityTip:;
- (BOOL)showProfileActivityTip;
- (id)init;
+ (void)snapshotForView:frame:completion:;
+ (void)snapshotImage:completion:;
+ (id)sharedInstance;
@end
