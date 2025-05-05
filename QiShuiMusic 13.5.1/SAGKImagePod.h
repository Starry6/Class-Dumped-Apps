@interface SAGKImagePod : SAGKPodView
@property (nonatomic) NSArray images;
- (id)groupIdentifier;
- (id)images;
- (id)encodedClassName;
- (void)setImages:;
+ (id)imagePod;
+ (id)imagePodWithDictionary:context:;
@end
