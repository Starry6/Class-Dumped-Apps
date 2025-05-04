@interface AWEUserRemoteYellowDotSettings : NSObject
@property (nonatomic) NSArray yellowPoints;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCurrentUserID:;
- (id)yellowPoints;
- (void)setYellowPoints:;
- (void).cxx_destruct;
- (id)currentUserID;
+ (void)_aweLazyRegisterLoad;
+ (id)settingsRequestPath;
+ (void)updateSettingsWithDictionary:;
+ (id)sharedInstance;
@end
