@interface AWEYellowDotManager : NSObject
@property (nonatomic) NSDictionary dotChangeRequestDict;
@property (nonatomic) NSMapTable componentDelegateTable;
@property (nonatomic) NSLock lock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentDelegateTable;
- (id)dotChangeRequestDict;
- (void)setDotChangeRequestDict:;
- (void)registerComponentType:conditionCallbackDelegate:;
- (void)changeComponent:requestBy:action:;
- (BOOL)isCompont:yellowDotShowRequestBy:;
- (BOOL)isCompontYellowDotShow:;
- (void)setComponentDelegateTable:;
- (id)init;
- (void)setLock:;
- (id)lock;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
