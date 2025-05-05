@interface BDLynxChannelRegisterConfig : NSObject
@property (nonatomic) NSString channelDescription;
@property (nonatomic) NSString channelName;
@property (nonatomic) Q minTemplateVersionCode;
@property (nonatomic) q loadPolicy;
- (long long)loadPolicy;
- (unsigned long long)minTemplateVersionCode;
- (void)setLoadPolicy:;
- (void)setMinTemplateVersionCode:;
- (id)channelName;
- (void).cxx_destruct;
- (void)setChannelName:;
- (id)channelDescription;
- (void)setChannelDescription:;
@end
