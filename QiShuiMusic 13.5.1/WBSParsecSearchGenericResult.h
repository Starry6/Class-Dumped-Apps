@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult
@property (nonatomic) NSNumber titleMaximumLines;
@property (nonatomic) NSArray descriptionRichTexts;
@property (nonatomic) NSString footnote;
@property (nonatomic) NSString secondaryTitle;
@property (nonatomic) WBSParsecImageRepresentation secondaryTitleGlyph;
@property (nonatomic) WBSParsecAuxiliaryInfo auxiliaryInfo;
@property (nonatomic) WBSParsecImageRepresentation thumbnail;
- (id)initWithDictionary:;
- (id)thumbnail;
- (void).cxx_destruct;
- (id)secondaryTitle;
- (id)actionButton;
- (id)footnote;
- (id)thumbnailWithSession:;
- (id)titleMaximumLines;
- (id)descriptionRichTexts;
- (id)secondaryTitleGlyph;
- (id)auxiliaryInfo;
+ (id)_specializedSchema;
@end
