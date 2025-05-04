@interface AWEFeedActivityInfoModel : MTLModel
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEFeedActivityChannelInfoModel channelInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)enterFrom;
- (BOOL)isValidWithError:;
- (void).cxx_destruct;
- (id)channelInfo;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)channelInfoJSONTransformer;
@end
