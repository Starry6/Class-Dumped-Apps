@interface AWEAwemeSendRewardNetworkManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)strategySendRewardWithModel:extraInfo:completion:;
+ (id)commonParams:;
+ (id)arrayToJsonString:;
+ (id)configHostURL:;
+ (id)modelToJsonDictionary:;
+ (id)sendRewardConfigWithModel:;
@end
