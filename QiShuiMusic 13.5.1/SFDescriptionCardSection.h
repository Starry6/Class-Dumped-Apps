@interface SFDescriptionCardSection : SFTitleCardSection
@property (nonatomic) NSArray punchoutOptions;
@property (nonatomic) NSString punchoutPickerTitle;
@property (nonatomic) NSString punchoutPickerDismissText;
@property (nonatomic) BOOL canBeHidden;
@property (nonatomic) BOOL hasTopPadding;
@property (nonatomic) BOOL hasBottomPadding;
@property (nonatomic) NSString type;
@property (nonatomic) NSInteger separatorStyle;
@property (nonatomic) SFColor backgroundColor;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subtitle;
@property (nonatomic) SFText descriptionText;
@property (nonatomic) NSString expandText;
@property (nonatomic) SFImage image;
@property (nonatomic) BOOL titleNoWrap;
@property (nonatomic) NSNumber titleWeight;
@property (nonatomic) NSNumber descriptionSize;
@property (nonatomic) NSNumber descriptionWeight;
@property (nonatomic) BOOL descriptionExpand;
@property (nonatomic) NSInteger imageAlign;
@property (nonatomic) NSInteger textAlign;
@property (nonatomic) NSString attributionText;
@property (nonatomic) NSURL attributionURL;
@property (nonatomic) SFImage attributionGlyph;
@property (nonatomic) NSArray richDescriptions;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSData jsonData;
@property (nonatomic) BOOL isCentered;
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
- (void)setBackgroundColor:;
- (id)descriptionText;
- (id)initWithProtobuf:;
- (id)backgroundColor;
- (void)setType:;
- (void)setImage:;
- (void)setSubtitle:;
- (void)setTitle:;
- (id)initWithCoder:;
- (id)jsonData;
- (void)encodeWithCoder:;
- (id)type;
- (id)title;
- (void).cxx_destruct;
- (void)setDescriptionText:;
- (id)subtitle;
- (int)separatorStyle;
- (id)dictionaryRepresentation;
- (void)setSeparatorStyle:;
- (id)image;
- (id)copyWithZone:;
- (id)punchoutOptions;
- (id)attributionText;
- (void)setTitleNoWrap:;
- (void)setTitleWeight:;
- (void)setPunchoutOptions:;
- (void)setPunchoutPickerDismissText:;
- (void)setPunchoutPickerTitle:;
- (void)setDescriptionExpand:;
- (void)setDescriptionSize:;
- (void)setImageAlign:;
- (void)setDescriptionWeight:;
- (void)setCanBeHidden:;
- (void)setExpandText:;
- (void)setTextAlign:;
- (void)setAttributionGlyph:;
- (void)setAttributionText:;
- (void)setAttributionURL:;
- (void)setHasTopPadding:;
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
- (id)expandText;
- (BOOL)titleNoWrap;
- (id)titleWeight;
- (id)descriptionSize;
- (id)descriptionWeight;
- (BOOL)descriptionExpand;
- (int)imageAlign;
- (int)textAlign;
- (id)attributionURL;
- (id)attributionGlyph;
- (id)richDescriptions;
- (void)setRichDescriptions:;
- (BOOL)hasTitleNoWrap;
- (BOOL)hasDescriptionExpand;
- (BOOL)hasImageAlign;
- (BOOL)hasTextAlign;
+ (BOOL)supportsSecureCoding;
@end
