@interface AWEDeviceModelInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q generation;
@property (nonatomic) q serial;
@property (nonatomic) BOOL isAChip;
@property (nonatomic) q chipGeneration;
@property (nonatomic) BOOL graphicsPowerChip;
- (BOOL)isAChip;
- (void)setIsAChip:;
- (long long)chipGeneration;
- (void)setChipGeneration:;
- (BOOL)graphicsPowerChip;
- (void)setGraphicsPowerChip:;
- (void)setGeneration:;
- (long long)generation;
- (unsigned long long)type;
- (void)setType:;
- (long long)serial;
- (void)setSerial:;
@end
