@interface CBSystemHealthBluetooth : NSObject
@property (nonatomic) Q componentType;
- (unsigned long long)componentType;
- (id)init;
- (void)setComponentType:;
- (id)initWithComponentType:;
- (unsigned long long)getComponentStatusWithError:;
@end
