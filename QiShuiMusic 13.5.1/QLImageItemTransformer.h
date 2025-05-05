@interface QLImageItemTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)_maximumDimension;
- (id)transformedContentsFromURL:context:error:;
- (id)transformedContentsFromData:context:error:;
- (id)_contentsFromCGImageSource:context:scale:;
+ (id)allowedOutputClasses;
+ (id)animatableContentTypes;
@end
