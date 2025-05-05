@interface CRTextDecodingUtils : NSObject
+ (void)getBoundariesForRanges:topPoints:bottomPoints:imageSize:scale:featureImageSize:rect:rotatedRoi:radians:model:configuration:paddingLeft:paddingRight:rangeOffset:;
+ (void)getWordBoundariesForWhiteSpaceRanges:topPoints:bottomPoints:imageSize:scale:featureImageSize:rect:rotatedRoi:radians:model:configuration:rangeOffset:;
+ (void)getCharacterBoundariesForActivationRanges:topPoints:bottomPoints:imageSize:scale:featureImageSize:rect:rotatedRoi:radians:model:configuration:;
+ (BOOL)validateProbability:precisionThreshold:withLM:;
+ (id)tokenSequenceStringForTokens:falsePositiveFiltering:usingCharacterTokens:;
+ (id)tokenDelimiterRangesForTokens:falsePositiveFiltering:usingCharacterTokens:;
+ (id)wordTokensFromCharacterTokens:;
+ (id)characterRangesForTokens:fromActivation:falsePositiveFiltering:usingCharacterTokens:;
+ (id)tokenFilterPredicateFalsePositiveFiltering:keepWhitespaceToken:;
@end
