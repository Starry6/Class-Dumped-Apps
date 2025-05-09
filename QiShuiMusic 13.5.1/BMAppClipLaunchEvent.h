@interface BMAppClipLaunchEvent : BMEventBase
@property (nonatomic) NSString URLHash;
@property (nonatomic) NSString clipBundleID;
@property (nonatomic) NSString appBundleID;
@property (nonatomic) NSString webAppBundleID;
@property (nonatomic) NSString launchReason;
@property (nonatomic) NSURL fullURL;
@property (nonatomic) NSURL referrerURL;
@property (nonatomic) NSString referrerBundleID;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)appBundleID;
- (id)initWithProtoData:;
- (id)init;
- (id)proto;
- (id)URLHash;
- (id)encodeAsProto;
- (id)webAppBundleID;
- (id)clipBundleID;
- (id)fullURL;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)referrerBundleID;
- (id)referrerURL;
- (id)launchReason;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithURLHash:clipBundleID:appBundleID:webAppBundleID:launchReason:fullURL:referrerURL:referrerBundleID:;
+ (id)new;
+ (id)eventWithData:dataVersion:;
@end
