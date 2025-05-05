@interface SISchemaTopLevelUnionType : SISchemaInstrumentationMessage
@property (nonatomic) SIComponentIdentifier componentIdentifier;
@property (nonatomic) NSInteger componentName;
@property (nonatomic) NSInteger clockIsolationLevel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)componentName;
- (id)qualifiedMessageName;
- (BOOL)isProvisional;
- (int)getAnyEventType;
- (id)getTypeId;
- (id)getVersion;
- (id)componentIdentifier;
- (int)clockIsolationLevel;
- (id)wrapAsAnyEvent;
- (id)getComponentId;
- (int)getComponentName;
- (id)getRequestLinkInfo;
+ (int)joinability;
@end
