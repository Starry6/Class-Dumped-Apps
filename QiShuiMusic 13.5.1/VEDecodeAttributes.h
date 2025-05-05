@interface VEDecodeAttributes : NSObject
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) {?=qiIq} dts;
@property (nonatomic) {?=qiIq} duration;
@property (nonatomic) double begin;
@property (nonatomic) BOOL isDecoding;
@property (nonatomic) q sampleFlag;
@property (nonatomic) BOOL packetFlagDiscard;
- (id)dts;
- (void)setDts:;
- (BOOL)packetFlagDiscard;
- (long long)sampleFlag;
- (void)setIsDecoding:;
- (void)setPacketFlagDiscard:;
- (void)setSampleFlag:;
- (void)setDuration:;
- (double)begin;
- (id)duration;
- (id)pts;
- (BOOL)isDecoding;
- (void)setBegin:;
- (void)setPts:;
@end
