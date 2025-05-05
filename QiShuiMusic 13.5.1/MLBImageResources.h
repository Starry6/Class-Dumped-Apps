@interface MLBImageResources : NSObject
+ (id)imageNamed:;
+ (id)fileTypeImageNamed:;
+ (id)imageNamed:fileType:inDirectory:;
+ (id)imageName:appendingScale:;
@end
