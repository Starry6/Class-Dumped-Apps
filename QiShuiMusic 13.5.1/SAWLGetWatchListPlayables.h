@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand
@property (nonatomic) NSString statsId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)statsId;
- (void)setStatsId:;
+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:context:;
@end
