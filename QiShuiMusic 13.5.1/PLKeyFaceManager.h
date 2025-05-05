@interface PLKeyFaceManager : NSObject
- (void)markPersonAsNeedingKeyFace:photoLibrary:;
+ (id)sharedInstance;
@end
