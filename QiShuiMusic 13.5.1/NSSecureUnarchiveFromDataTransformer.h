@interface NSSecureUnarchiveFromDataTransformer : NSValueTransformer
- (id)transformedValue:;
- (id)description;
- (id)reverseTransformedValue:;
+ (id)allowedTopLevelClasses;
@end
