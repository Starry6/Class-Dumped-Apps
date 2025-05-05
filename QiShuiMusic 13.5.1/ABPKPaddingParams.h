@interface ABPKPaddingParams : NSObject
@property (nonatomic) I offsetHeight;
@property (nonatomic) I offsetWidth;
@property (nonatomic) I height;
@property (nonatomic) I width;
@property (nonatomic) float scale;
- (void)setScale:;
- (void)setWidth:;
- (unsigned int)height;
- (unsigned int)width;
- (void)setHeight:;
- (float)scale;
- (unsigned int)offsetWidth;
- (unsigned int)offsetHeight;
- (id)initWithInputResolution:andOutputResolution:;
- (void)setOffsetHeight:;
- (void)setOffsetWidth:;
@end
