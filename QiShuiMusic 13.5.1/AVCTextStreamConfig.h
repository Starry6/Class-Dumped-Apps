@interface AVCTextStreamConfig : NSObject
@property (nonatomic) q codecType;
@property (nonatomic) Q numRedundantPayloads;
@property (nonatomic) Q txRedPayloadType;
@property (nonatomic) Q rxRedPayloadType;
@property (nonatomic) float txIntervalMin;
- (id)dictionary;
- (BOOL)isValid;
- (long long)codecType;
- (void)setCodecType:;
- (void)setRxRedPayloadType:;
- (void)setTxIntervalMin:;
- (void)setNumRedundantPayloads:;
- (void)setTxRedPayloadType:;
- (unsigned long long)numRedundantPayloads;
- (void)setUpWithDictionary:;
- (float)txIntervalMin;
- (BOOL)isRedValid;
- (unsigned long long)txRedPayloadType;
- (unsigned long long)rxRedPayloadType;
+ (long long)clientCodecTypeWithCodecType:;
+ (long long)codecTypeWithClientCodecType:;
@end
