@interface AWEMateSearchCellBusinessModel : AWEMateListCollectionViewCellBusinessModel
@property (nonatomic) AWEIMUser iMUser;
- (void)addHighlightToAttributedString:inRange:;
- (id)subTitleAttributedString;
- (void)setIMUser:;
- (id)iMUser;
- (id)p_alias;
- (id)p_displayName;
- (id)normalTitleAttributedStringWithText:;
- (id)p_sigLabelWithString:format:;
- (id)normalSubTitleAttributedStringWithText:;
- (id)initWithiMUser:activeStatusIdentifier:dataController:;
- (id)subTitle;
- (void).cxx_destruct;
- (id)title;
- (id)attributedTitle;
@end
