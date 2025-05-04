@interface AWEIMIncentiveChatIdentity : NSObject
@property (nonatomic) AWEIMIncentiveChatIdentityQuota identityQuota;
@property (nonatomic) NSMutableDictionary relations;
- (id)identityQuota;
- (id)initWithDictionary:chatType:;
- (void)setIdentityQuota:;
- (id)relations;
- (void).cxx_destruct;
- (void)setRelations:;
@end
