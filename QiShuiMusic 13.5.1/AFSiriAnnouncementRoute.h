@interface AFSiriAnnouncementRoute : NSObject
@property (nonatomic) NSString productID;
@property (nonatomic) NSString btAddress;
@property (nonatomic) Q availableAnnouncementRequestTypes;
@property (nonatomic) NSDictionary avscRouteDescription;
@property (nonatomic) q announcePlatformForRoute;
- (id)productID;
- (void)setProductID:;
- (void)setAvscRouteDescription:;
- (void)_initializeInternalState;
- (void)setBtAddress:;
- (long long)announcePlatformForRoute;
- (unsigned long long)_getRouteCapabilities;
- (long long)_announcementPlatform;
- (void)setAvailableAnnouncementRequestTypes:;
- (unsigned long long)availableAnnouncementRequestTypes;
- (void).cxx_destruct;
- (BOOL)_isHearingAidsRoute;
- (BOOL)_isBuiltInSpeakerRoute;
- (id)btAddress;
- (id)avscRouteDescription;
- (id)initWithRouteDescription:hearingAidsAnnounceEnabled:builtInSpeakerAnnounceEnabled:;
- (void)setAnnouncePlatformForRoute:;
@end
