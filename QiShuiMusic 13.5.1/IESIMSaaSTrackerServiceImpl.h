@interface IESIMSaaSTrackerServiceImpl : HTSService
@property (nonatomic) NSArray hostTrackEvents;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)hostTrackEvents;
- (void)setHostTrackEvents:;
- (void)trackScene:event:label:params:;
- (void)trackScene:event:params:;
- (id)init;
- (void).cxx_destruct;
@end
