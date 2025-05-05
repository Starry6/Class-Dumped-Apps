@interface SARecordActivity : SABaseClientBoundCommand
@property (nonatomic) SAActivityObject activity;
- (id)groupIdentifier;
- (void)setActivity:;
- (BOOL)requiresResponse;
- (id)activity;
- (id)encodedClassName;
+ (id)recordActivity;
+ (id)recordActivityWithDictionary:context:;
@end
