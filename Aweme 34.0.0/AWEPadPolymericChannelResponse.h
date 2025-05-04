@interface AWEPadPolymericChannelResponse : MTLModel
@property (nonatomic) AWEPadPolymericChannelPageModel channelPageResponse;
@property (nonatomic) NSDictionary logPB;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString logID;
- (id)logPB;
- (void)setLogPB:;
- (id)channelPageResponse;
- (void)setChannelPageResponse:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (id)channelPageResponseJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
