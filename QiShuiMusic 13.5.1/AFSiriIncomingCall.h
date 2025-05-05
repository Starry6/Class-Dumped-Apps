@interface AFSiriIncomingCall : NSObject
@property (nonatomic) NSString callUUID;
@property (nonatomic) NSString callProviderIdentifier;
@property (nonatomic) NSString callProviderBundleID;
@property (nonatomic) NSArray callerContactIdentifiers;
@property (nonatomic) TUHandle handle;
@property (nonatomic) BOOL isVideo;
@property (nonatomic) BOOL isCallerIDBlocked;
- (id)init;
- (BOOL)isVideo;
- (id)handle;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)callUUID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithCallUUID:callProviderIdentifier:callProviderBundleID:callers:handle:isVideo:isCallerIDBlocked:;
- (id)initWithCallUUID:callProviderIdentifier:callProviderBundleID:callerContactIdentifiers:handle:isVideo:isCallerIDBlocked:;
- (id)callProviderIdentifier;
- (id)callProviderBundleID;
- (id)callerContactIdentifiers;
- (BOOL)isCallerIDBlocked;
+ (BOOL)supportsSecureCoding;
@end
