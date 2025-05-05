@interface IESLiveResouceBundleAdjunct : IESLiveResouceBundle
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)preHook;
- (id)objectForKey:type:;
@end
