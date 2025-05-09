@interface NSAttributedString : NSObject
@property (nonatomic) NSDictionary yy_attributes;
@property (nonatomic) UIFont yy_font;
@property (nonatomic) NSNumber yy_kern;
@property (nonatomic) UIColor yy_color;
@property (nonatomic) UIColor yy_backgroundColor;
@property (nonatomic) NSNumber yy_strokeWidth;
@property (nonatomic) UIColor yy_strokeColor;
@property (nonatomic) NSShadow yy_shadow;
@property (nonatomic) q yy_strikethroughStyle;
@property (nonatomic) UIColor yy_strikethroughColor;
@property (nonatomic) q yy_underlineStyle;
@property (nonatomic) UIColor yy_underlineColor;
@property (nonatomic) NSNumber yy_ligature;
@property (nonatomic) NSString yy_textEffect;
@property (nonatomic) NSNumber yy_obliqueness;
@property (nonatomic) NSNumber yy_expansion;
@property (nonatomic) NSNumber yy_baselineOffset;
@property (nonatomic) BOOL yy_verticalGlyphForm;
@property (nonatomic) NSString yy_language;
@property (nonatomic) NSArray yy_writingDirection;
@property (nonatomic) NSParagraphStyle yy_paragraphStyle;
@property (nonatomic) q yy_alignment;
@property (nonatomic) q yy_lineBreakMode;
@property (nonatomic) double yy_lineSpacing;
@property (nonatomic) double yy_paragraphSpacing;
@property (nonatomic) double yy_paragraphSpacingBefore;
@property (nonatomic) double yy_firstLineHeadIndent;
@property (nonatomic) double yy_headIndent;
@property (nonatomic) double yy_tailIndent;
@property (nonatomic) double yy_minimumLineHeight;
@property (nonatomic) double yy_maximumLineHeight;
@property (nonatomic) double yy_lineHeightMultiple;
@property (nonatomic) q yy_baseWritingDirection;
@property (nonatomic) float yy_hyphenationFactor;
@property (nonatomic) double yy_defaultTabInterval;
@property (nonatomic) NSArray yy_tabStops;
@property (nonatomic) YYTextShadow yy_textShadow;
@property (nonatomic) YYTextShadow yy_textInnerShadow;
@property (nonatomic) YYTextDecoration yy_textUnderline;
@property (nonatomic) YYTextDecoration yy_textStrikethrough;
@property (nonatomic) YYTextBorder yy_textBorder;
@property (nonatomic) YYTextBorder yy_textBackgroundBorder;
@property (nonatomic) {CGAffineTransform=dddddd} yy_textGlyphTransform;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSArray writableTypeIdentifiersForItemProvider;
@property (nonatomic) {_NSRange=QQ} ic_range;
@property (nonatomic) {_NSRange=QQ} vk_range;
@property (nonatomic) Q _lp_stringType;
@property (nonatomic) {_NSRange=QQ} juFullRange;
@property (nonatomic) NSString string;
- (void)HMDP_enumerateAttributesInRange:options:usingBlock:;
- (id)HMDP_attributedSubstringFromRange:;
- (void)HMDP_enumerateAttribute:inRange:options:usingBlock:;
- (BOOL)HMDP_containsAttachmentsInRange:;
- (id)HMDP_fileWrapperFromRange:documentAttributes:error:;
- (id)HMDP_dataFromRange:documentAttributes:error:;
- (void)enumerateCFAttributesInRange:options:usingBlock:;
- (id)initWithString:cfAttributes:;
- (long long)yy_baseWritingDirectionAtIndex:;
- (id)yy_font;
- (id)yy_kern;
- (id)yy_fontAtIndex:;
- (BOOL)yy_isSharedAttributesInAllRange;
- (id)yy_kernAtIndex:;
- (id)yy_textBackgroundBorderAtIndex:;
- (long long)yy_alignment;
- (long long)yy_alignmentAtIndex:;
- (id)yy_archiveToData;
- (id)yy_attribute:atIndex:;
- (id)yy_attributes;
- (id)yy_attributesAtIndex:;
- (id)yy_backgroundColor;
- (id)yy_backgroundColorAtIndex:;
- (long long)yy_baseWritingDirection;
- (id)yy_baselineOffset;
- (id)yy_baselineOffsetAtIndex:;
- (BOOL)yy_canDrawWithUIKit;
- (id)yy_color;
- (id)yy_colorAtIndex:;
- (double)yy_defaultTabInterval;
- (double)yy_defaultTabIntervalAtIndex:;
- (id)yy_expansion;
- (id)yy_expansionAtIndex:;
- (double)yy_firstLineHeadIndent;
- (double)yy_firstLineHeadIndentAtIndex:;
- (double)yy_headIndent;
- (double)yy_headIndentAtIndex:;
- (float)yy_hyphenationFactor;
- (float)yy_hyphenationFactorAtIndex:;
- (id)yy_language;
- (id)yy_languageAtIndex:;
- (id)yy_ligature;
- (id)yy_ligatureAtIndex:;
- (long long)yy_lineBreakMode;
- (long long)yy_lineBreakModeAtIndex:;
- (double)yy_lineHeightMultiple;
- (double)yy_lineHeightMultipleAtIndex:;
- (double)yy_lineSpacing;
- (double)yy_lineSpacingAtIndex:;
- (double)yy_maximumLineHeight;
- (double)yy_maximumLineHeightAtIndex:;
- (double)yy_minimumLineHeight;
- (double)yy_minimumLineHeightAtIndex:;
- (id)yy_obliqueness;
- (id)yy_obliquenessAtIndex:;
- (double)yy_paragraphSpacing;
- (double)yy_paragraphSpacingAtIndex:;
- (double)yy_paragraphSpacingBefore;
- (double)yy_paragraphSpacingBeforeAtIndex:;
- (id)yy_paragraphStyle;
- (id)yy_paragraphStyleAtIndex:;
- (id)yy_plainTextForRange:;
- (id)yy_rangeOfAll;
- (id)yy_shadow;
- (id)yy_shadowAtIndex:;
- (id)yy_strikethroughColor;
- (id)yy_strikethroughColorAtIndex:;
- (long long)yy_strikethroughStyle;
- (long long)yy_strikethroughStyleAtIndex:;
- (id)yy_strokeColor;
- (id)yy_strokeColorAtIndex:;
- (id)yy_strokeWidth;
- (id)yy_strokeWidthAtIndex:;
- (id)yy_tabStops;
- (id)yy_tabStopsAtIndex:;
- (double)yy_tailIndent;
- (double)yy_tailIndentAtIndex:;
- (id)yy_textBackgroundBorder;
- (id)yy_textBorder;
- (id)yy_textBorderAtIndex:;
- (id)yy_textEffect;
- (id)yy_textEffectAtIndex:;
- (id)yy_textGlyphTransform;
- (id)yy_textGlyphTransformAtIndex:;
- (id)yy_textInnerShadow;
- (id)yy_textInnerShadowAtIndex:;
- (id)yy_textShadow;
- (id)yy_textShadowAtIndex:;
- (id)yy_textStrikethrough;
- (id)yy_textStrikethroughAtIndex:;
- (id)yy_textUnderline;
- (id)yy_textUnderlineAtIndex:;
- (id)yy_underlineColor;
- (id)yy_underlineColorAtIndex:;
- (long long)yy_underlineStyle;
- (long long)yy_underlineStyleAtIndex:;
- (BOOL)yy_verticalGlyphForm;
- (BOOL)yy_verticalGlyphFormAtIndex:;
- (id)yy_writingDirection;
- (id)yy_writingDirectionAtIndex:;
- (id)ieslive_boundingRectWithSize:line:;
- (id)ieslive_boundingRectWithWidth:line:;
- (double)ieslive_heightWithWidth:;
- (double)ieslive_heightWithWidth:line:;
- (id)iesim_attributedStringByAppendTailAttributedString:ellipsisAttributedString:maximumWidth:maximumNumberOfLines:error:;
- (id)iesim_boundingRectWithSize:maximumNumberOfLines:;
- (id)iesim_prettyLayoutSizeWithMaxWidth:lastLineAtLeastRatio:;
- (id)safe_attribute:atIndex:effectiveRange:;
- (id)safe_attribute:atIndex:longestEffectiveRange:inRange:;
- (void)safe_enumerateAttribute:inRange:options:usingBlock:;
- (void)safe_enumerateAttributesInRange:options:usingBlock:;
- (id)cj_size:;
- (double)btd_heightWithWidth:;
- (void)cs_writeToFileHandle:;
- (id)cs_rangesMatchingPredicate:;
- (void)cs_writeToFileHandle:supportingANSIEscapeCodes:;
- (id)dd_attributedStringByAppendingAttributedString:;
- (id)dd_attributedSubstringFromRange:;
- (BOOL)attribute:existsInRange:;
- (id)trimmedString;
- (id)defaultLanguage;
- (BOOL)_isStringDrawingTextStorage;
- (BOOL)hasColorGlyphsInRange:;
- (id)size;
- (id)dataFromRange:documentAttributes:error:;
- (id)initWithData:options:documentAttributes:error:;
- (id)_ui_attributedSubstringFromRange:scaledByScaleFactor:;
- (id)initWithURL:options:documentAttributes:error:;
- (id)boundingRectWithSize:options:context:;
- (id)fileWrapperFromRange:documentAttributes:error:;
- (void)drawWithRect:options:context:;
- (void)drawAtPoint:;
- (void)drawInRect:;
- (id)initWithHTML:options:documentAttributes:;
- (id)initWithFileURL:options:documentAttributes:error:;
- (id)doubleClickAtIndex:;
- (id)doubleClickAtIndex:inRange:;
- (unsigned long long)_lineBreakBeforeIndex:withinRange:lineBreakStrategy:;
- (unsigned long long)lineBreakBeforeIndex:withinRange:;
- (unsigned long long)lineBreakByHyphenatingBeforeIndex:withinRange:;
- (unsigned long long)nextWordFromIndex:forward:;
- (BOOL)containsAttachmentsInRange:;
- (BOOL)containsAttachments;
- (id)stringByStrippingAttachmentCharactersAndConvertingWritingDirectionToBidiControlCharactersFromRange:;
- (id)RTFFromRange:documentAttributes:;
- (id)RTFDFromRange:documentAttributes:;
- (id)RTFDFileWrapperFromRange:documentAttributes:;
- (id)docFormatFromRange:documentAttributes:;
- (id)_htmlDocumentFragmentString:documentAttributes:subresources:;
- (id)_documentFromRange:document:documentAttributes:subresources:;
- (id)_initWithRTFSelector:argument:documentAttributes:;
- (id)initWithRTF:documentAttributes:;
- (id)initWithRTFD:documentAttributes:;
- (id)initWithRTFDFileWrapper:documentAttributes:;
- (id)initWithDocFormat:documentAttributes:;
- (id)_initWithURLFunnel:options:documentAttributes:;
- (id)initWithURL:documentAttributes:;
- (id)initWithPath:documentAttributes:;
- (id)initWithHTML:documentAttributes:;
- (id)initWithHTML:baseURL:documentAttributes:;
- (id)fontAttributesInRange:;
- (id)rulerAttributesInRange:;
- (id)rangeOfTextBlock:atIndex:;
- (id)rangeOfTextTable:atIndex:;
- (BOOL)_atStartOfTextTable:atIndex:;
- (BOOL)_atEndOfTextTable:atIndex:;
- (id)_rangeOfTextTableRow:atIndex:completeRow:;
- (id)_rangeOfTextTableRow:atIndex:;
- (BOOL)_atStartOfTextTableRow:atIndex:;
- (BOOL)_atEndOfTextTableRow:atIndex:;
- (id)rangeOfTextList:atIndex:;
- (long long)itemNumberInTextList:atIndex:;
- (id)_ui_attributedSubstringFromRange:withTrackingAdjustment:;
- (void)drawWithRect:options:;
- (id)boundingRectWithSize:options:;
- (id)initWithAttachment:attributes:;
- (long long)_ui_resolvedTextAlignment;
- (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:forItemProviderCompletionHandler:;
- (id)_loadFileRepresentationOfTypeIdentifier:forItemProviderCompletionHandler:;
- (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:;
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:userInterfaceLayoutDirection:;
- (long long)_ui_resolvedTextAlignmentForUserInterfaceLayoutDirection:;
- (long long)_ui_resolvedTextAlignmentForParagraphStyle:;
- (long long)_ui_resolvedWritingDirection;
- (long long)_ui_resolvedWritingDirectionForUserInterfaceLayoutDirection:;
- (id)_ui_attributedStringWithOriginalFontAttributes;
- (id)_ui_glyphImageViewsScale:outImageRect:outLineRect:outBaselineOffset:;
- (id)_ui_rtfdFileWrapperError:;
- (id)_ui_rtfDataError:;
- (id)_ui_attributedStringAdjustedToTraitCollection:;
- (id)initWithItemProviderData:typeIdentifier:error:;
- (id)_UIKBStringWideAttributeValueForKey:;
- (id)initSwiftUIAttributedStringWithFormat:options:locale:arguments:;
- (id)_axRecursivelyReconstitutedRepresentationFromPropertyListWithError:;
- (id)_axRecursivelyPropertyListCoercedRepresentationWithError:;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:error:;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:defaultReplacementAttributes:error:;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:defaultReplacementAttributes:startTokenDelimiter:endTokenDelimiter:error:;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:defaultReplacementAttributes:;
- (id)_mapkit_attributedStringByApplyingBindingFormatReplacements:;
- (void)ic_enumerateClampedAttribute:inRange:options:usingBlock:;
- (void)ic_enumerateUnclampedAttribute:inRange:options:usingBlock:;
- (id)ic_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)ic_attributedSubstringFromRange:;
- (id)ic_componentRangesSeparatedByPredicate:inRange:;
- (id)ic_enclosingRangeContainingCharactersInSet:forRange:;
- (id)ic_range;
- (id)ic_attributedStringByReplacingCharactersInSet:withString:;
- (id)ic_rangeByTrimmingCharactersInSet:inRange:;
- (void)ic_enumerateAttributesInClampedRange:options:usingBlock:;
- (id)vk_range;
- (id)vk_attributedSubstringFromRange:;
- (void)vk_enumerateClampedAttribute:inRange:options:usingBlock:;
- (void)vk_enumerateUnclampedAttribute:inRange:options:usingBlock:;
- (id)vk_attributedStringByReplacingNewlineCharactersWithWhiteSpace;
- (id)vk_attributedStringByReplacingCharactersInSet:withString:;
- (id)safari_attributedStringByReplacingAttributeName:withAttributes:;
- (unsigned long long)_lp_stringType;
- (void)_lp_setStringType:;
- (id)__im_messagePartMatchingPartIndex:;
- (unsigned long long)__im_countMessageParts;
- (id)__im_messagePartIndexes;
- (id)__im_attributedSubstringFromRange:;
- (id)__im_dataDetectedURLsFromAttributes;
- (void)__im_visitMessageParts:;
- (id)__im_partDescriptorWithIndex:range:totalPartCount:;
- (BOOL)__im_containsAttributedValue:;
- (long long)__im_insertionIndexForMessagePartBody:;
- (id)__im_messagePartMatchingRange:;
- (id)__im_messageTextByReplacingMessagePartIndex:withNewPartText:;
- (id)__im_messageTextByRemovingMessagePartIndex:;
- (id)__im_rangeToMessagePartIndexMap;
- (id)__im_messagePartIndexToRangeMap;
- (id)juParagraphStyleAtIndex:effectiveRange:;
- (long long)juBaseWritingDirectionForCharacterAtIndex:unknownStyle:;
- (id)juFullRange;
- (long long)juStrongBaseWritingDirectionOfParagraphAtOrBeforeIndex:;
- (id)string;
- (BOOL)_mayRequireIntentResolution;
- (id)replacementObjectForPortCoder:;
- (id)attribute:atIndex:longestEffectiveRange:inRange:;
- (id)attributesAtIndex:effectiveRange:;
- (id)attributesAtIndex:longestEffectiveRange:inRange:;
- (BOOL)isEqualToAttributedString:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)_markIntentsResolved;
- (void)encodeWithCoder:;
- (unsigned long long)_cfTypeID;
- (id)attribute:atIndex:effectiveRange:;
- (void)enumerateAttribute:inRange:options:usingBlock:;
- (id)description;
- (void)_markRequiringIntentResolution;
- (unsigned long long)length;
- (Class)classForCoder;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)attributedSubstringFromRange:;
- (id)copyWithZone:;
- (id)initWithContentsOfMarkdownFileAtURL:options:baseURL:error:;
- (id)initWithMarkdown:options:baseURL:error:;
- (id)initWithMarkdownString:options:baseURL:error:;
- (void)enumerateAttributesInRange:options:usingBlock:;
- (id)attributedSubstringFromRange:replacingCharactersInRanges:numberOfRanges:withString:;
- (id)attributedStringByWeaklyAddingAttributes:;
- (BOOL)_willRequireIntentResolutionWhenContainingAttributes:;
- (BOOL)_willRequireIntentResolutionWhenContainingAttribute:value:;
- (id)_createAttributedSubstringWithRange:;
- (id)_firstValueOfAttributeWithKey:inRange:;
- (id)_inflectedAttributedStringWithReplacements:;
- (id)_identicalAttributesInRange:;
- (id)attributedStringByInflectingString;
- (id)_initWithFormat:options:locale:;
- (id)_initWithFormat:options:locale:arguments:;
- (id)__initWithFormat:attributeOptions:formattingOptions:locale:arguments:;
- (id)_initWithFormat:attributeOptions:formattingOptions:locale:;
- (id)_initWithFormat:attributeOptions:formattingOptions:locale:arguments:;
- (id)initWithFormat:options:locale:;
- (id)initWithFormat:options:locale:arguments:;
+ (id)yy_attachmentStringWithContent:contentMode:attachmentSize:alignToFont:alignment:;
+ (id)yy_attachmentStringWithContent:contentMode:width:ascent:descent:;
+ (id)yy_attachmentStringWithEmojiImage:fontSize:;
+ (id)yy_unarchiveFromData:;
+ (id)ieslivesaas_colorFromHexString:;
+ (id)ieslivesaas_attributedStringFromHTML:;
+ (id)ieslivesaas_attributedStringFromHTML:boldFont:italicFont:;
+ (id)ieslivesaas_attributedStringFromHTML:normalFont:boldFont:italicFont:;
+ (id)ieslivesaas_attributedStringFromHTML:normalFont:boldFont:italicFont:imageMap:;
+ (id)ieslivesaas_attributedStringFromNode:normalFont:boldFont:italicFont:imageMap:;
+ (id)ieslivesaas_colorFromAHexString:;
+ (id)ieslivesaas_fontOrSystemFontForName:size:;
+ (id)ieslive_replaceNSAttachmentToYYAttachment:;
+ (double)heightOfTextElement:withWidth:;
+ (id)iesec_makeAttributeStringWithTextElement:;
+ (id)sizeOfTextElement:;
+ (id)btd_attributedStringWithString:;
+ (id)btd_attributedStringWithString:attributes:;
+ (id)attribute:font:style:;
+ (id)attributedStringWithAttachment:;
+ (BOOL)_isAttributedStringAgent;
+ (id)allowedSecureCodingClasses;
+ (id)_documentTypeForFileType:;
+ (id)_sharedAttachmentString;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:typeIdentifier:error:;
+ (id)_objectWithItemProviderFileURL:typeIdentifier:isInPlace:error:;
+ (long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:;
+ (long long)_preferredRepresentationForItemProviderReadableTypeIdentifier:;
+ (id)_systemTextSearchTextAttributesForStyle:;
+ (id)_objectWithItemProviderData:typeIdentifier:userInfo:error:;
+ (id)_objectWithRTFDAtURL:userInfo:error:;
+ (id)_mapkit_attributedStringWithBindingFormat:replacements:attributes:error:;
+ (id)_mapkit_attributedStringWithBindingFormat:replacements:defaultReplacementAttributes:startTokenDelimiter:endTokenDelimiter:error:;
+ (id)_mapkit_attributedStringWithBindingFormat:replacements:attributes:;
+ (void)_handleFormattingError:forString:;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:defaultAttributes:;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:defaultAttributes:variableOverrides:;
+ (id)_mapkit_attributedTransitStringForServerFormattedString:defaultAttributes:variableOverrides:options:;
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:departure:darkMode:;
+ (id)_mapkit_attributedLiveTransitStringFromDepartureString:departure:textAttributes:darkMode:symbolOverrideColor:;
+ (id)_mapkit_attributedLiveTransitStringFromAttributedDepartureString:liveStatus:darkMode:symbolOverrideColor:;
+ (id)attributedStringWithFormatAndAttributes:;
+ (id)ec_emailAttributedStringWithString:andEmailAddress:;
+ (void)_loadFromHTMLWithOptions:contentLoader:completionHandler:;
+ (void)loadFromHTMLWithRequest:options:completionHandler:;
+ (void)loadFromHTMLWithFileURL:options:completionHandler:;
+ (void)loadFromHTMLWithString:options:completionHandler:;
+ (void)loadFromHTMLWithData:options:completionHandler:;
+ (id)ic_emptyAttributedString;
+ (id)safari_attributedStringWithLinkText:linkUrl:extraTitle:;
+ (id)asc_attributedStringWithLockupHeading:compatibleWithTraitCollection:;
+ (id)asc_attributedStringWithLockupTextContainingSymbols:compatibleWithTraitCollection:;
+ (void)__im_diffPartIndexesInEditedMessage:previousMessage:editedPartIndexes:removedPartIndexes:;
+ (id)juEmpty;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)_attributedStringWithFormat:attributeOptions:formattingOptions:locale:arguments:;
+ (void)_setAttributedDictionaryClass:;
+ (id)_localizedAttributedStringWithFormat:;
+ (id)_localizedAttributedStringWithFormat:options:;
+ (id)_attributedStringWithFormat:options:locale:arguments:;
+ (id)localizedAttributedStringWithFormat:;
+ (id)localizedAttributedStringWithFormat:options:;
@end
