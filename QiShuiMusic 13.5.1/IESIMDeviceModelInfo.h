@interface IESIMDeviceModelInfo : NSObject
@property (nonatomic) Q type;
@property (nonatomic) q generation;
@property (nonatomic) q serial;
@property (nonatomic) BOOL isAChip;
@property (nonatomic) q chipGeneration;
@property (nonatomic) BOOL graphicsPowerChip;
- (BOOL)isAChip;
- (long long)chipGeneration;
- (BOOL)graphicsPowerChip;
- (void)setChipGeneration:;
- (void)setGraphicsPowerChip:;
- (void)setIsAChip:;
- (long long)serial;
- (void)setType:;
- (unsigned long long)type;
- (void)setGeneration:;
- (long long)generation;
- (void)setSerial:;
@end
