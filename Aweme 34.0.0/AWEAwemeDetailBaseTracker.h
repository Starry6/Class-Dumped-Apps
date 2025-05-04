@interface AWEAwemeDetailBaseTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)paramsForStayTimeInDetailTableVC:extraParams:;
- (id)paramsForEnterPersonalDetailInDetailTableVC:extraParams:;
- (id)paramsForEnterDetailInDetailTableVC:extraParams:;
- (id)paramsForTrackerIn:type:extraParams:;
- (void)didTrackForTrackerInDetailTableVC:type:trackParams:;
+ (id)trackKeyForType:;
@end
