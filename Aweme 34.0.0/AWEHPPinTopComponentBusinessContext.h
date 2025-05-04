@interface AWEHPPinTopComponentBusinessContext : NSObject
@property (nonatomic) NSString channelID;
@property (nonatomic) AWEHPPinTopComponentUIConfig componentConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentConfig;
- (void)setComponentConfig:;
- (BOOL)isValidWithError:;
- (void)setChannelID:;
- (id)channelID;
- (void).cxx_destruct;
@end
