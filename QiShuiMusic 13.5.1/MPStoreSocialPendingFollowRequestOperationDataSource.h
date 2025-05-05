@interface MPStoreSocialPendingFollowRequestOperationDataSource : NSObject
@property (nonatomic) q action;
@property (nonatomic) MPModelSocialPerson person;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithAction:;
- (id)queryItems;
- (long long)httpMethod;
- (long long)action;
- (id)bagKey;
- (id)httpBody;
- (void).cxx_destruct;
- (void)setPerson:;
- (id)person;
- (long long)httpBodyType;
- (id)fallbackBagKeys;
- (id)_actionTypeString;
@end
