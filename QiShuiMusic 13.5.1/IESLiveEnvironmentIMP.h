@interface IESLiveEnvironmentIMP : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)currentTargetName;
- (id)liveSDKVersion;
- (id)liveStreamProjectKeyForRoomScene:;
- (unsigned long long)currentTarget;
+ (unsigned long long)currentTarget;
@end
