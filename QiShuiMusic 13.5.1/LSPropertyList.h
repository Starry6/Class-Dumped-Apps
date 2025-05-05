@interface LSPropertyList : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSDictionary _expensiveDictionaryRepresentation;
@property (nonatomic) NSString _applicationIdentifier;
- (id)_EX_dictionaryForKey:;
- (id)dictionaryOfObjectsForKeys:;
- (void)detach;
- (id)init;
- (id)objectForKey:ofClass:valuesOfClass:;
- (id)debugDescription;
- (id)objectForKey:ofClass:;
- (id)description;
- (id)_init;
- (id)objectsForKeys:;
- (id)_expensiveDictionaryRepresentation;
- (id)copyWithZone:;
- (id)_applicationIdentifier;
+ (id)new;
+ (id)propertyListWithDictionary:;
+ (id)propertyListWithContentsOfURL:options:error:;
+ (id)propertyListWithData:;
@end
