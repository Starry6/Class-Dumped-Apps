@interface AWEHPCombineSubscriberWrapper : NSObject
@property (nonatomic) <AWEHPCombineSubscriberWrapperDelegate> delegate;
@property (nonatomic) NSString businessID;
@property (nonatomic) <AWEHPNetCombineSubscriberProtocol> subscriber;
@property (nonatomic) AWEHPCombineSubscriberAbilityImpl abilityImpl;
- (void)setAbilityImpl:;
- (id)abilityImpl;
- (id)delegate;
- (id)subscriber;
- (id)businessID;
- (void)setSubscriber:;
- (void)setBusinessID:;
- (id)description;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
