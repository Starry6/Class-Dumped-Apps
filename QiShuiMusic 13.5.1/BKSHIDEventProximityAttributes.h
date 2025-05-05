@interface BKSHIDEventProximityAttributes : BKSHIDEventBaseAttributes
@property (nonatomic) NSInteger proximityDetectionMode;
- (void)setProximityDetectionMode:;
- (int)proximityDetectionMode;
- (void)appendDescriptionToFormatter:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)protobufSchema;
@end
