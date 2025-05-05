@interface AMSFinanceDelegateAuthenticateChallengeResponse : NSObject
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) AMSURLTaskInfo taskInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)responseDictionary;
- (id)taskInfo;
- (void).cxx_destruct;
- (void)setResponseDictionary:;
- (void)setTaskInfo:;
- (id)performWithTaskInfo:;
- (id)initWithResponseDictionary:taskInfo:;
+ (BOOL)isDelegateAuthChallengeForTaskInfo:;
@end
