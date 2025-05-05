@interface SASyncGetCachedSyncAnchorsResponse : SABaseCommand
@property (nonatomic) NSArray anchors;
@property (nonatomic) NSString interactionId;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)interactionId;
- (void)setInteractionId:;
- (id)anchors;
- (void)setAnchors:;
+ (id)getCachedSyncAnchorsResponse;
+ (id)getCachedSyncAnchorsResponseWithDictionary:context:;
@end
