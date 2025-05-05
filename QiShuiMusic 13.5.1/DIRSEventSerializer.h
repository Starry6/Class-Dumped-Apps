@interface DIRSEventSerializer : DIRSBasicModule
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)_toDictionary:;
- (id)dataWithEvent:options:error:;
- (id)eventWithData:options:error:;
- (unsigned long long)encodingType;
+ (id)allowedParameterFields;
+ (id)moduleId;
+ (BOOL)isPlugin;
+ (id)moduleVersion;
@end
