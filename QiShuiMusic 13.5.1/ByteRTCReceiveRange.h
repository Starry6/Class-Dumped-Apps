@interface ByteRTCReceiveRange : NSObject
@property (nonatomic) NSInteger min;
@property (nonatomic) NSInteger max;
- (int)min;
- (int)max;
- (void)setMax:;
- (void)setMin:;
@end
