@interface WKUserScript : NSObject
@property (nonatomic) _WKUserContentWorld _userContentWorld;
@property (nonatomic) WKContentWorld _contentWorld;
@property (nonatomic) NSString source;
@property (nonatomic) q injectionTime;
@property (nonatomic) BOOL forMainFrameOnly;
@property (nonatomic) ^{Object=^^?@} _apiObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initSaaSWithScriptURLs:toPosition:forMainFrameOnly:;
- (void)dealloc;
- (id)_apiObject;
- (id)source;
- (id)copyWithZone:;
- (id)_contentWorld;
- (id)_userContentWorld;
- (id)initWithSource:injectionTime:forMainFrameOnly:;
- (id)initWithSource:injectionTime:forMainFrameOnly:inContentWorld:;
- (long long)injectionTime;
- (BOOL)isForMainFrameOnly;
- (id)_initWithSource:injectionTime:forMainFrameOnly:includeMatchPatternStrings:excludeMatchPatternStrings:associatedURL:contentWorld:deferRunningUntilNotification:;
@end
