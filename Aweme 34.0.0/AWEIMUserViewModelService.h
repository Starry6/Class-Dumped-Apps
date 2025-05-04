@interface AWEIMUserViewModelService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)assignUserViewModel:withUser:;
- (void)refreshUserViewModel:;
- (void)refreshUserViewModel:WithExtraParams:;
- (void)queryUserViewModel:ForIMUserWithExtraParams:cacheFirst:;
+ (id)sharedIntance;
@end
