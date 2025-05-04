@interface AWELiveLocalLifeLynxModel : MTLModel
@property (nonatomic) NSString renderType;
@property (nonatomic) NSString siteType;
@property (nonatomic) NSString sURL;
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) NSArray resourceChannelList;
@property (nonatomic) NSArray secondPageChannelList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)renderType;
- (id)lynxSchema;
- (void)setLynxSchema:;
- (id)resourceChannelList;
- (id)siteType;
- (void)setSiteType:;
- (id)sURL;
- (void)setSURL:;
- (void)setResourceChannelList:;
- (id)secondPageChannelList;
- (void)setSecondPageChannelList:;
- (void)setRenderType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
