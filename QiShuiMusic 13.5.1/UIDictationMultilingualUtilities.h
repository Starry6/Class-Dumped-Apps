@interface UIDictationMultilingualUtilities : NSObject
+ (BOOL)hasMultilingualAttributesForAttributedString:;
+ (id)multilingualAttributesForAttributedString:;
+ (id)textReplacementFromMultilingualString:replacementRange:stringToReplace:;
@end
