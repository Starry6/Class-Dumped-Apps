@interface CRInsightsContext : NSObject
@property (nonatomic) NSMutableDictionary info;
@property (nonatomic) CRCameraReader cameraReader;
- (id)valueForKey:;
- (id)init;
- (void)setValue:forKey:;
- (void)setInfo:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)description;
- (id)info;
- (id)cameraReader;
- (void)setCameraReader:;
@end
