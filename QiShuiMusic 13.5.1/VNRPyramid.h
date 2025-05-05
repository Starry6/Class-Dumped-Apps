@interface VNRPyramid : NSObject
@property (nonatomic) NSArray lumaLevels;
@property (nonatomic) NSArray chromaLevels;
- (void).cxx_destruct;
- (id)initWithMetalDevice:isForDeghosting:width:height:nLumaLevels:nChromaLevels:lumaStartingLevel:chromaStartingLevel:;
- (id)lumaLevels;
- (id)chromaLevels;
@end
