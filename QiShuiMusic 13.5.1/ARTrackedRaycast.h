@interface ARTrackedRaycast : NSObject
@property (nonatomic) NSUUID identifier;
@property (nonatomic) @? updateHandler;
@property (nonatomic) ARWorldTrackingTechnique attachedWorldTrackingTechnique;
@property (nonatomic) ARRaycastQuery trackedQuery;
- (id)identifier;
- (id)query;
- (id)updateHandler;
- (void).cxx_destruct;
- (id)description;
- (void)stopTracking;
- (id)initWithIdentifier:ray:worldTrackingTechnique:updateHandler:;
- (id)attachedWorldTrackingTechnique;
- (void)setAttachedWorldTrackingTechnique:;
- (id)trackedQuery;
- (void)setTrackedQuery:;
@end
