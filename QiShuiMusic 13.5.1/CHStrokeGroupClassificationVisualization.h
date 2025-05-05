@interface CHStrokeGroupClassificationVisualization : CHStrokeGroupingVisualization
- (void)drawVisualizationInRect:context:viewBounds:;
- (long long)layeringPriority;
- (id)_newColorForStroke:inGroup:;
- (id)_attributedStringFromString:withColor:font:paragraphStyle:;
@end
