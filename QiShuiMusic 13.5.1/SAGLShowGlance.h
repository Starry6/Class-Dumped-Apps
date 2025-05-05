@interface SAGLShowGlance : SABaseClientBoundCommand
@property (nonatomic) NSString bundleId;
- (id)groupIdentifier;
- (id)bundleId;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setBundleId:;
+ (id)showGlance;
+ (id)showGlanceWithDictionary:context:;
@end
