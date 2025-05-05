@interface AMSEngagementMessageEvent : NSObject
@property (nonatomic) NSArray placementInfo;
@property (nonatomic) NSString serviceType;
@property (nonatomic) NSDictionary data;
@property (nonatomic) NSDictionary engagementData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)data;
- (id)serviceType;
- (id)placementInfo;
- (void)setServiceType:;
- (void).cxx_destruct;
- (id)initWithServiceType:placementInfo:;
- (id)initWithServiceType:placements:;
- (id)engagementData;
- (void)setData:;
- (void)setPlacementInfo:;
@end
