@interface STUserData : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString givenName;
@property (nonatomic) BOOL isParent;
@property (nonatomic) BOOL isRemote;
@property (nonatomic) BOOL hasPasscode;
@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL syncingEnabled;
@property (nonatomic) BOOL checkForUnsafePhotos;
@property (nonatomic) BOOL isCommunicationSafetyNotificationEnabled;
@property (nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic) NSString familyMemberType;
- (id)givenName;
- (BOOL)isCommunicationSafetyNotificationEnabled;
- (id)identifier;
- (BOOL)syncingEnabled;
- (void).cxx_destruct;
- (BOOL)isRemote;
- (BOOL)isCommunicationSafetyAnalyticsEnabled;
- (BOOL)screenTimeEnabled;
- (BOOL)isParent;
- (id)familyMemberType;
- (BOOL)hasPasscode;
- (id)initWithIdentifier:givenName:isParent:isRemote:hasPasscode:screenTimeEnabled:syncingEnabled:checkForUnsafePhotos:communicationSafetyNotificationEnabled:communicationSafetyAnalyticsEnabled:familyMemberType:;
- (BOOL)checkForUnsafePhotos;
@end
