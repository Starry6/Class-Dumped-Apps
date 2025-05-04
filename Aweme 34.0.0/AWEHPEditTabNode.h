@interface AWEHPEditTabNode : MTLModel
@property (nonatomic) NSString tabID;
@property (nonatomic) NSArray subChannels;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTabID:;
- (void)setSubChannels:;
- (id)subChannels;
- (void).cxx_destruct;
- (id)tabID;
+ (id)subChannelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
