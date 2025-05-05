@interface IOSurfaceDebugDescription : NSObject
@property (nonatomic) Q virtualAddress;
@property (nonatomic) Q allocationSize;
@property (nonatomic) I surfaceID;
@property (nonatomic) I pixelFormat;
@property (nonatomic) NSString pixelFormatString;
@property (nonatomic) I width;
@property (nonatomic) I height;
@property (nonatomic) Q dirtySize;
@property (nonatomic) Q residentSize;
@property (nonatomic) NSString name;
+ (id)surfaceDescriptions;
@end
