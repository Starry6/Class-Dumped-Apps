@interface SAUIRequestUpdateViews : SABaseClientBoundCommand
@property (nonatomic) NSArray commands;
@property (nonatomic) NSNumber timeInSeconds;
@property (nonatomic) NSArray viewIds;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
- (id)timeInSeconds;
- (void)setTimeInSeconds:;
- (id)viewIds;
- (void)setViewIds:;
+ (id)requestUpdateViews;
+ (id)requestUpdateViewsWithDictionary:context:;
@end
