@interface AWEElderModeManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)elderModeStateDidInit:;
- (void)elderModeDidChangeToState:;
- (id)requestParams;
+ (id)sharedManager;
@end
