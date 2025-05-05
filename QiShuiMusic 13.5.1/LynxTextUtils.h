@interface LynxTextUtils : NSObject
+ (long long)applyNaturalAlignmentAccordingToTextLanguage:refactor:;
+ (id)getEllpsisStringAccordingToWritingDirection:;
+ (id)measureText:fontSize:fontFamily:maxWidth:maxLine:;
@end
