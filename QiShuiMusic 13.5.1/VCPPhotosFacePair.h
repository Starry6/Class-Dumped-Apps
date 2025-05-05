@interface VCPPhotosFacePair : NSObject
@property (nonatomic) VCPPhotosFace face1;
@property (nonatomic) VCPPhotosFace face2;
@property (nonatomic) double distance;
- (double)distance;
- (void).cxx_destruct;
- (id)initWithFace:andFace:distance:;
- (id)face1;
- (id)face2;
+ (id)pairWithFace:andFace:distance:;
@end
