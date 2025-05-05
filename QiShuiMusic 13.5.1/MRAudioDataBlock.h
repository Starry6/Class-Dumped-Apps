@interface MRAudioDataBlock : NSObject
@property (nonatomic) MRAudioBuffer buffer;
@property (nonatomic) {?=dd} time;
@property (nonatomic) float gain;
@property (nonatomic) _MRAudioDataBlockProtobuf protobuf;
@property (nonatomic) NSData data;
- (float)gain;
- (id)buffer;
- (id)time;
- (id)initWithProtobuf:;
- (id)data;
- (id)protobuf;
- (id)initWithData:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
- (id)_copyWithZone:usingConcreteClass:;
- (void)_parseBuffer:;
- (void)_parseTimestamp:;
- (void)_parseGain:;
@end
