@interface SAUISetURLData : SABaseClientBoundCommand
@property (nonatomic) NSArray urlData;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)urlData;
- (void)setUrlData:;
+ (id)setURLData;
+ (id)setURLDataWithDictionary:context:;
@end
