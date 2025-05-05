@interface SAMPSetOutputSource : SADomainCommand
@property (nonatomic) NSURL outputSourceId;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)outputSourceId;
- (void)setOutputSourceId:;
+ (id)setOutputSource;
+ (id)setOutputSourceWithDictionary:context:;
@end
