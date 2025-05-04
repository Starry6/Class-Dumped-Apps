@interface AWEDitoTrackImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)ditoHasTriggeredTrackWithEventName:params:;
- (void)ditoHmdTrackWithServiceName:metric:category:extra:;
@end
