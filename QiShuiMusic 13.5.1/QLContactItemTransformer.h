@interface QLContactItemTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedContentsFromData:context:error:;
+ (id)allowedOutputClasses;
@end
