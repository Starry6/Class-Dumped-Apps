@interface IESLiveSaaSReference : NSObject
@property (nonatomic) q audienceCount;
@property (nonatomic) <IESLiveSaaSReferenceActions> actionCreator;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)releaseAudience;
- (id)actionCreator;
- (long long)audienceCount;
- (long long)audienceReferenceCount;
- (void)retainAudience;
- (void)setActionCreator:;
- (void)setAudienceCount:;
- (void).cxx_destruct;
+ (id)shared;
@end
