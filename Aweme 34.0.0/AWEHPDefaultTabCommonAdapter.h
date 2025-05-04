@interface AWEHPDefaultTabCommonAdapter : NSObject
@property (nonatomic) NSArray bottomTabIDList;
@property (nonatomic) NSArray topTabItemList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupForPad;
- (void)setupForElder;
- (void)setupForDefault;
- (id)getBottomTabIDList;
- (BOOL)serverEnable;
- (id)bottomTabIDList;
- (id)topTabItemList;
- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (id)weakTarget;
+ (Class)weakTargetClass;
@end
