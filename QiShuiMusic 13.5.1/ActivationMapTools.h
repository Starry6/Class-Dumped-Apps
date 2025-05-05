@interface ActivationMapTools : NSObject
+ (id)characterCentroidsFromActivationMap:codeMap:decodedSymbolIndexes:;
+ (int)colInImage:forPoint:inActivationMapWithSize:;
+ (id)characterCentroidsFromActivationMap:codeMap:potentialPatterns:minWordLengthFractionForCorrelationPeak:bestModelIndex:;
+ (id)decodeStringWithCentroids:activationMap:codeMap:model:;
+ (id)textFromActivationMap:codeMap:invert:;
+ (void)extractActivationSignals:fromActivationMap:forModel:codeMap:;
+ (BOOL)matchLabel:toModelCharacter:;
+ (id)fitSpacingModel:toActivationMap:codeMap:minWordLengthFractionForCorrelationPeak:cost:;
@end
