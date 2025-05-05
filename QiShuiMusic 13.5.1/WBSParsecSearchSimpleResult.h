@interface WBSParsecSearchSimpleResult : WBSParsecLegacySearchResult
@property (nonatomic) NSNumber titleMaximumNumberOfLines;
@property (nonatomic) NSString descriptionLeadInText;
@property (nonatomic) NSNumber descriptionMaximumNumberOfLines;
@property (nonatomic) BOOL descriptionTextCanWrap;
@property (nonatomic) NSString footnote;
@property (nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property (nonatomic) <WBSParsecSearchSession> parsecSearchSession;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) WBSParsecSearchMapsResultFeedbackSender mapsFeedbackSender;
- (id)titleMaximumNumberOfLines;
- (id)initWithDictionary:;
- (id)parsecSearchSession;
- (void).cxx_destruct;
- (void)setParsecSearchSession:;
- (id)footnote;
- (id)mapsFeedbackSender;
- (void)setMapsFeedbackSender:;
- (id)titleGlyphWithSession:;
- (id)descriptionLeadInText;
- (id)descriptionMaximumNumberOfLines;
- (BOOL)descriptionTextCanWrap;
- (BOOL)hasSingleLineDescriptionAndTitle;
@end
