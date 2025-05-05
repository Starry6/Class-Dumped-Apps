@interface WBSCreditCardFormatter : NSFormatter
@property (nonatomic) BOOL showLastFourDigits;
@property (nonatomic) BOOL showCreditCardNumber;
@property (nonatomic) BOOL allowsUnknownCardTypes;
@property (nonatomic) BOOL isVirtualCard;
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (BOOL)isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:;
- (BOOL)isPartialStringValid:newEditingString:errorDescription:;
- (id)_normalizedSelectionRangeForFormattedCreditCardNumber:withOriginalSelectionRange:;
- (id)_selectionRangeInFormattedCreditCardNumber:forNormalizedSelectionRange:inNormalizedCreditCardNumber:;
- (BOOL)showLastFourDigits;
- (void)setShowLastFourDigits:;
- (BOOL)showCreditCardNumber;
- (void)setShowCreditCardNumber:;
- (BOOL)allowsUnknownCardTypes;
- (void)setAllowsUnknownCardTypes:;
- (BOOL)isVirtualCard;
- (void)setIsVirtualCard:;
+ (id)formattedStringForNormalizedNumber:showCreditCardNumber:;
+ (id)_formattedStringForNormalizedNumber:showCreditCardNumber:showLastFourDigits:isVirtualCard:;
@end
