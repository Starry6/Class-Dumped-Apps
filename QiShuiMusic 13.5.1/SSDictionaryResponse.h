@interface SSDictionaryResponse : NSObject
@property (nonatomic) NSDictionary responseDictionary;
@property (nonatomic) NSArray actions;
@property (nonatomic) NSNumber failureType;
@property (nonatomic) NSArray pingURLs;
@property (nonatomic) BOOL supportedProtocolVersion;
@property (nonatomic) NSURL versionMismatchURL;
- (id)init;
- (id)responseDictionary;
- (id)initWithResponseDictionary:;
- (id)_valueForProtocolKey:;
- (id)actions;
- (void).cxx_destruct;
- (id)versionMismatchURL;
- (id)pingURLs;
- (id)copyWithZone:;
- (id)failureType;
- (id)actionsWithActionType:;
- (BOOL)isSupportedProtocolVersion;
- (id)_copyAccount;
@end
