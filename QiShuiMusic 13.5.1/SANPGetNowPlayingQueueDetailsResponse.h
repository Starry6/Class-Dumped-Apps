@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand
@property (nonatomic) NSArray nextItems;
@property (nonatomic) NSArray previousItems;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)nextItems;
- (void)setNextItems:;
- (id)previousItems;
- (void)setPreviousItems:;
+ (id)getNowPlayingQueueDetailsResponse;
+ (id)getNowPlayingQueueDetailsResponseWithDictionary:context:;
@end
