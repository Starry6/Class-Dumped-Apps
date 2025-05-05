@interface NSFormatter : NSObject
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_invalidateCache;
- (BOOL)_mayDecorateAttributedStringForObjectValue:;
- (BOOL)isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:;
- (id)copyWithZone:;
- (BOOL)getObjectValue:forString:range:error:;
- (id)attributedStringForObjectValue:withDefaultAttributes:;
- (long long)_cacheGenerationCount;
- (BOOL)_tracksCacheGenerationCount;
- (id)editingStringForObjectValue:;
- (BOOL)isPartialStringValid:newEditingString:errorDescription:;
@end
