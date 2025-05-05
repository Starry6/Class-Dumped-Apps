@interface EKChangeTrackingClientId : NSObject
@property (nonatomic) NSString suffix;
@property (nonatomic) NSString customClientId;
@property (nonatomic) CADChangeTrackingClientId CADChangeTrackingClientId;
- (id)init;
- (id)initWithSuffix:;
- (id)suffix;
- (id)initWithCustomClientId:;
- (void).cxx_destruct;
- (id)customClientId;
- (id)initWithCustomClientId:suffix:;
- (id)CADChangeTrackingClientId;
@end
