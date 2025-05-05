@interface BXScreenInfo : NSObject
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) float scale;
@property (nonatomic) float ppi;
@property (nonatomic) float screenInch;
- (float)ppi;
- (void)setPpi:;
- (float)screenInch;
- (void)setScreenInch:;
- (void)setScale:;
- (void)setWidth:;
- (float)height;
- (float)width;
- (void)setHeight:;
- (float)scale;
@end
