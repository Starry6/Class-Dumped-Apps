@interface IESLiveSaaSTrackerInterceptor : NSObject
@property (nonatomic) NSHashTable subInterceptors;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)subInterceptors;
- (void)addArrayElement:;
- (void)removeArrayElement:;
- (void)setSubInterceptors:;
- (BOOL)shouldFilterTrackEvent:params:;
- (void)willCommitTrackEvent:params:;
- (id)init;
- (void).cxx_destruct;
+ (id)shared;
@end
