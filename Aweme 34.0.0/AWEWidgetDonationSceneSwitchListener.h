@interface AWEWidgetDonationSceneSwitchListener : NSObject
@property (nonatomic) NSArray eventList;
@property (nonatomic) AWEWidgetDonationSceneModel donationSceneModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)eventList;
- (void)setEventList:;
- (void)reportEvent:params:;
- (id)initWithDonationSceneModel:;
- (id)donationSceneModel;
- (void)setDonationSceneModel:;
- (void).cxx_destruct;
@end
