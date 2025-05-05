@interface QLTextItemTransformer : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)transformedContentsFromURL:context:error:;
- (id)transformedContentsFromData:context:error:;
+ (id)allowedOutputClasses;
+ (id)attributedStringFromData:encoding:typeIdentifier:error:;
+ (id)wrapperFromData:encoding:typeIdentifier:error:;
@end
