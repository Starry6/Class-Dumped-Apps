@interface SAWLWatchListChannelDetails : AceObject
@property (nonatomic) NSData appIconDynamicImage;
@property (nonatomic) NSString appName;
@property (nonatomic) NSURL appStoreURL;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setAppName:;
- (id)appName;
- (id)encodedClassName;
- (id)appIconDynamicImage;
- (void)setAppIconDynamicImage:;
- (id)appStoreURL;
- (void)setAppStoreURL:;
+ (id)watchListChannelDetails;
+ (id)watchListChannelDetailsWithDictionary:context:;
@end
