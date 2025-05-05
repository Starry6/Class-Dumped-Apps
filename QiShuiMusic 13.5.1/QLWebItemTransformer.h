@interface QLWebItemTransformer : QLItemTransformer
- (id)transformedContentsFromURL:context:error:;
- (id)transformedContentsFromData:context:error:;
+ (id)allowedOutputClasses;
@end
