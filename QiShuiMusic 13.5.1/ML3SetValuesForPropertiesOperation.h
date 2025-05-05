@interface ML3SetValuesForPropertiesOperation : ML3DatabaseOperation
- (unsigned long long)type;
- (BOOL)_execute:;
- (BOOL)_setValues:forProperties:withEntityClass:usingPersistentID:connection:error:;
@end
