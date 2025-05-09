@interface SFDetailedRowCardSection : SFCardSection
@property (nonatomic) NSArray punchoutOptions;
@property (nonatomic) NSString punchoutPickerTitle;
@property (nonatomic) NSString punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) NSString type;
@property (nonatomic) NSInteger separatorStyle;
@property (nonatomic) SFColor backgroundColor;
@property (nonatomic) SFImage thumbnail;
@property (nonatomic) BOOL preventThumbnailImageScaling;
@property (nonatomic) SFRichText title;
@property (nonatomic) SFFormattedText secondaryTitle;
@property (nonatomic) SFImage secondaryTitleImage;
@property (nonatomic) BOOL isSecondaryTitleDetached;
@property (nonatomic) NSArray descriptions;
@property (nonatomic) SFRichText footnote;
@property (nonatomic) SFFormattedText trailingTopText;
@property (nonatomic) SFFormattedText trailingMiddleText;
@property (nonatomic) SFFormattedText trailingBottomText;
@property (nonatomic) SFActionItem action;
@property (nonatomic) SFButton button;
@property (nonatomic) BOOL shouldUseCompactDisplay;
@property (nonatomic) NSArray buttonItems;
@property (nonatomic) SFImage trailingThumbnail;
@property (nonatomic) BOOL buttonItemsAreTrailing;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) BOOL hideDivider;
@property (nonatomic) SFCard nextCard;
@property (nonatomic) NSArray commands;
@property (nonatomic) NSArray parameterKeyPaths;
@property (nonatomic) NSString cardSectionId;
@property (nonatomic) NSString resultIdentifier;
@property (nonatomic) SFUserReportRequest userReportRequest;
@property (nonatomic) SFCommand command;
@property (nonatomic) SFCommand previewCommand;
@property (nonatomic) NSArray previewButtonItems;
@property (nonatomic) NSString commandDetail;
@property (nonatomic) NSString cardSectionDetail;
@property (nonatomic) NSString previewButtonItemsTitle;
@property (nonatomic) NSArray embeddedCards;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThumbnail:;
- (void)setBackgroundColor:;
- (id)initWithProtobuf:;
- (id)backgroundColor;
- (void)setType:;
- (id)action;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)jsonData;
- (unsigned long long)hash;
- (void)setAction:;
- (void)encodeWithCoder:;
- (id)thumbnail;
- (id)type;
- (id)title;
- (id)button;
- (void).cxx_destruct;
- (void)setSecondaryTitle:;
- (id)secondaryTitle;
- (int)separatorStyle;
- (id)dictionaryRepresentation;
- (void)setSeparatorStyle:;
- (void)setButton:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)punchoutOptions;
- (id)buttonItems;
- (void)setButtonItems:;
- (void)setFootnote:;
- (id)descriptions;
- (void)setDescriptions:;
- (id)footnote;
- (void)setPunchoutOptions:;
- (void)setPunchoutPickerDismissText:;
- (void)setPunchoutPickerTitle:;
- (void)setCanBeHidden:;
- (void)setTrailingBottomText:;
- (void)setTrailingMiddleText:;
- (void)setTrailingTopText:;
- (void)setHasTopPadding:;
- (BOOL)preventThumbnailImageScaling;
- (void)setPreventThumbnailImageScaling:;
- (id)secondaryTitleImage;
- (void)setSecondaryTitleImage:;
- (BOOL)isSecondaryTitleDetached;
- (void)setIsSecondaryTitleDetached:;
- (BOOL)shouldUseCompactDisplay;
- (void)setShouldUseCompactDisplay:;
- (id)punchoutPickerTitle;
- (id)punchoutPickerDismissText;
- (BOOL)canBeHidden;
- (BOOL)hasTopPadding;
- (BOOL)hasBottomPadding;
- (void)setHasBottomPadding:;
- (BOOL)hasCanBeHidden;
- (BOOL)hasHasTopPadding;
- (BOOL)hasHasBottomPadding;
- (BOOL)hasSeparatorStyle;
- (id)trailingTopText;
- (id)trailingMiddleText;
- (id)trailingBottomText;
- (id)trailingThumbnail;
- (void)setTrailingThumbnail:;
- (BOOL)buttonItemsAreTrailing;
- (void)setButtonItemsAreTrailing:;
- (BOOL)hasPreventThumbnailImageScaling;
- (BOOL)hasIsSecondaryTitleDetached;
- (BOOL)hasShouldUseCompactDisplay;
- (BOOL)hasButtonItemsAreTrailing;
+ (BOOL)supportsSecureCoding;
@end
