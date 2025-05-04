@interface AWEAd3rdPartyURLTracker : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)sendURLResponse:eventModel:userInfo:;
- (void)bizDowngradeAsyncbyteADTrackURL;
- (void)byteADTrackURLStrings:withContext:;
- (void)trackAdEvent:context:;
- (void)logResult:withInfo:;
- (void)trackURLStrings:withContext:;
- (void)supervise3rdPartyURLTrakingWithURLString:statusCode:timestamp:userAgent:context:;
+ (id)sharedInstance;
@end
