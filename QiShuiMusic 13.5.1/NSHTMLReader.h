@interface NSHTMLReader : NSObject
- (void)_load;
- (void)dealloc;
- (id)attributedString;
- (id)initWithData:options:;
- (id)initWithDOMRange:;
- (id)documentAttributes;
- (void)setMutableAttributedString:;
- (void)_loadUsingWebKitOnMainThread;
- (void)_loadUsingWebKit;
- (Class)_webViewClass;
- (Class)_webArchiveClass;
- (Class)_DOMHTMLTableCellElementClass;
- (id)_webPreferences;
- (id)_childrenForNode:;
- (id)_computedStyleForElement:;
- (id)_specifiedStyleForElement:;
- (id)_computedStringForNode:property:;
- (id)_stringForNode:property:;
- (BOOL)_getComputedFloat:forNode:property:;
- (BOOL)_getFloat:forNode:property:;
- (BOOL)_elementIsBlockLevel:;
- (BOOL)_elementHasOwnBackgroundColor:;
- (id)_blockLevelElementForNode:;
- (id)_computedColorForNode:property:;
- (id)_colorForNode:property:;
- (id)_computedAttributesForElement:;
- (id)_attributesForElement:;
- (void)_newParagraphForElement:tag:allowEmpty:suppressTrailingSpace:isEntering:;
- (void)_newLineForElement:;
- (void)_newTabForElement:;
- (BOOL)_addAttachmentForElement:URL:needsParagraph:usePlaceholder:;
- (void)_addQuoteForElement:opening:level:;
- (void)_addValue:forElement:;
- (void)_fillInBlock:forElement:backgroundColor:extraMargin:extraPadding:isTable:;
- (void)_processMetaElementWithName:content:;
- (void)_processHeadElement:;
- (BOOL)_enterElement:tag:display:depth:embedded:;
- (void)_addTableForElement:;
- (void)_addTableCellForElement:;
- (BOOL)_processElement:tag:display:depth:;
- (void)_addMarkersToList:range:;
- (void)_exitElement:tag:display:depth:startIndex:;
- (void)_processText:;
- (void)_traverseNode:depth:embedded:;
- (void)_traverseFooterNode:depth:;
- (void)_parseNode:;
- (void)_adjustTrailingNewline;
- (BOOL)_sanitizeWebArchiveArray:;
- (BOOL)_sanitizeWebArchiveDictionary:;
- (id)_createWebArchiveForData:;
- (void)_loadFromDOMRange;
- (id)initWithPath:options:;
+ (id)defaultParagraphStyle;
+ (BOOL)_usesLibXML2ForOptions:;
+ (BOOL)allowsAttributedStringAgentForOptions:;
@end
