@interface AWEToXiguaPersonalPageRouteModel : NSObject
@property (nonatomic) NSString toUserId;
@property (nonatomic) NSString scene;
@property (nonatomic) NSString launchFrom;
@property (nonatomic) NSString location;
@property (nonatomic) NSDictionary extraTrackParams;
- (id)extraTrackParams;
- (void)setExtraTrackParams:;
- (id)toUserId;
- (void)setToUserId:;
- (id)launchFrom;
- (void)setLaunchFrom:;
- (void)setScene:;
- (id)location;
- (id)scene;
- (void)setLocation:;
- (void).cxx_destruct;
@end
