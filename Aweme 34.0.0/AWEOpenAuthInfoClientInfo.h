@interface AWEOpenAuthInfoClientInfo : MTLModel
@property (nonatomic) NSString clientKey;
@property (nonatomic) NSString clientName;
@property (nonatomic) NSString clientIcon;
@property (nonatomic) NSArray protocolInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)clientIcon;
- (void)setClientIcon:;
- (id)protocolInfo;
- (void)setProtocolInfo:;
- (void)setClientName:;
- (id)clientKey;
- (id)clientName;
- (void)setClientKey:;
- (void).cxx_destruct;
+ (id)protocolInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
