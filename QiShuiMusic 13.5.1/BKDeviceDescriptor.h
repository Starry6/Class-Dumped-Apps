@interface BKDeviceDescriptor : NSObject
@property (nonatomic) q type;
- (void)setType:;
- (long long)type;
+ (id)deviceDescriptorForType:;
@end
