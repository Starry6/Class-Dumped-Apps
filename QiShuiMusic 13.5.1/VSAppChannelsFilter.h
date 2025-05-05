@interface VSAppChannelsFilter : NSObject
@property (nonatomic) NSSet genericAppAdamIDs;
@property (nonatomic) NSSet personalAppAdamIDs;
@property (nonatomic) NSSet personalChannelIDs;
@property (nonatomic) NSArray allChannelMappings;
@property (nonatomic) NSDictionary appsByChannelID;
@property (nonatomic) NSArray personalAppDescriptions;
- (id)init;
- (void).cxx_destruct;
- (void)_updateAdamIDs;
- (void)setPersonalChannelIDs:;
- (void)setAllChannelMappings:;
- (id)personalAppDescriptions;
- (id)personalChannelIDs;
- (id)allChannelMappings;
- (id)personalAppAdamIDs;
- (void)setPersonalAppAdamIDs:;
- (id)genericAppAdamIDs;
- (void)setGenericAppAdamIDs:;
- (id)appsByChannelID;
- (void)setAppsByChannelID:;
@end
