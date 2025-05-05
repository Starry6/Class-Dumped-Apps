@interface IESGurdSyncResourcesGroup : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSObject<OS_dispatch_group> group;
@property (nonatomic) NSMutableDictionary statusDictionary;
@property (nonatomic) BOOL successful;
- (void)leaveWithChannel:isSuccessful:status:;
- (id)completion;
- (void)setCompletion:;
- (void)setGroup:;
- (id)statusDictionary;
- (id)group;
- (void)enter;
- (void).cxx_destruct;
- (void)setSuccessful:;
- (BOOL)isSuccessful;
- (void)notifyWithBlock:;
- (void)setStatusDictionary:;
+ (id)groupWithCompletion:;
@end
