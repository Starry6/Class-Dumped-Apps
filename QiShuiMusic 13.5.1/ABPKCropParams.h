@interface ABPKCropParams : NSObject
@property (nonatomic) I offsetHeight;
@property (nonatomic) I offsetWidth;
@property (nonatomic) I height;
@property (nonatomic) I width;
- (void)setWidth:;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (unsigned int)offsetWidth;
- (unsigned int)offsetHeight;
- (id)initWithInputResolution:andOutputResolution:;
- (void)setOffsetHeight:;
- (void)setOffsetWidth:;
- (id)initWithAspectRatio:andInputResolution:;
@end
