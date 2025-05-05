@interface IESLivePlayerMiddlewarePropertyContainer : NSObject
@property (nonatomic) Q generateStageType;
@property (nonatomic) BOOL isEnqueuingReusedRoom;
@property (nonatomic) BOOL smoothSwitching;
@property (nonatomic) BOOL headTrackingHasSet;
- (BOOL)smoothSwitching;
- (unsigned long long)generateStageType;
- (BOOL)headTrackingHasSet;
- (BOOL)isEnqueuingReusedRoom;
- (void)setGenerateStageType:;
- (void)setHeadTrackingHasSet:;
- (void)setIsEnqueuingReusedRoom:;
- (void)setSmoothSwitching:;
- (id)init;
@end
