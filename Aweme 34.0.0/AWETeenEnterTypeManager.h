@interface AWETeenEnterTypeManager : NSObject
@property (nonatomic) BOOL enterByModeChange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (void)registerMessage;
- (void)setEnterByModeChange:;
- (BOOL)enterByModeChange;
- (void)dealloc;
+ (id)sharedInstance;
@end
