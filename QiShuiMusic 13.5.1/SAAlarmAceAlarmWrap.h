@interface SAAlarmAceAlarmWrap : SAAlarmObject
@property (nonatomic) NSNumber generation;
@property (nonatomic) NSURL identifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setGeneration:;
- (id)generation;
+ (id)aceAlarmWrap;
+ (id)aceAlarmWrapWithDictionary:context:;
@end
