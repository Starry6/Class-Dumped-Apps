@interface AXMTextLayoutManager : NSObject
@property (nonatomic) AXMSemanticTextFactory semanticTextFactory;
@property (nonatomic) NSNumberFormatter numberFormatter;
@property (nonatomic) NSMeasurementFormatter measurementFormatter;
- (id)numberFormatter;
- (void)setNumberFormatter:;
- (void).cxx_destruct;
- (id)semanticTextFactory;
- (void)setSemanticTextFactory:;
- (id)initWithSemanticTextFactory:;
- (id)measurementFormatter;
- (id)fractionDenominatorValuesWithOneAsNumerator;
- (id)fractionDenominatorValues;
- (id)measurementAbbreviationsToVerboseString;
- (id)receiptRegularExpressions;
- (id)_assembleLayoutSequences:;
- (id)_assembleLayoutLines:;
- (id)_assembleLayoutRegions:;
- (id)_assembleLayoutCellsWithFeatures:;
- (id)_assembleLayoutRow:;
- (id)_assembleLayoutHeader:;
- (id)_assembleLayoutColumn:;
- (id)_assembleLayoutRowFromCell:;
- (id)_assembleLayoutTable:header:columnItems:;
- (id)_assembleNutritionLabelLayoutWithRows:;
- (id)_assembleReceipt:;
- (id)documentWithTextFeatures:canvasSize:preferredLocales:applySemanticAnalysis:error:;
- (id)envelopeWithTextFeatures:canvasSize:preferredLocales:applySemanticAnalysis:error:;
- (id)extractDataFromEnvelopeWithFeatures:preferredLocales:canvasSize:;
- (id)documentWithTable:canvasSize:preferredLocales:requestHandler:metrics:error:;
- (id)documentWithNutritionLabel:canvasSize:requestHandler:metrics:error:;
- (id)documentWithReceipt:withTextSkew:canvasSize:preferredLocales:requestHandler:metrics:error:;
- (id)preprocessTable:width:height:metrics:;
- (id)preprocessNutritionLabel:finalFrame:;
- (id)preprocessReceipt:withTextSkew:width:height:metrics:requestHandler:finalFrame:;
- (id)largestDetectedContoursForImage:;
- (id)detectCenterContourFromContours:withImageExtent:;
- (BOOL)isBoundary:withinNormalizedDistance:ofBoundary:;
- (BOOL)isBoundary:withinBoundary:withNormalizedThreshold:;
- (id)imageRectForNormalizedRect:imageWidth:imageHeight:;
- (id)processReceiptText:foundMerchantName:preferredLocales:;
- (id)filterReceiptForGarbageText:;
- (BOOL)hasConsecutiveCharacters:withLength:;
- (BOOL)hasConsecutiveDigits:withLength:;
- (id)sortContourRowResults:maxWidth:maxHeight:minWidth:minHeight:;
- (id)sortContourColumnResults:maxWidth:maxHeight:;
- (id)getTableRows:;
- (id)getTableColumns:;
- (BOOL)verifyTable:sortedColumns:;
- (id)nutritionLabelRowsForContourResults:normalizedNutritionLabelFrame:fullImageFrame:processedImageFrame:;
- (id)getReceiptRows:preferredLocales:canvasSize:;
- (id)textRowsForTable:sourceImage:requestHandler:canvasSize:;
- (id)textColumnsForTable:sourceImage:requestHandler:canvasSize:;
- (id)featureCellsForNutritionLabelRows:withRequestHandler:withCanvasSize:;
- (id)processNutritionLabelText:;
- (id)processFraction:;
- (id)processMeasurement:;
- (void)setMeasurementFormatter:;
@end
