@interface CalDAVCalendarServerResourceChangeElement : CoreDAVItemWithHrefChildItem
@property (nonatomic) NSURL fullHrefURL;
@property (nonatomic) CalDAVUpdateOwnerItem changedBy;
- (id)fullHrefURL;
- (id)changedBy;
- (id)copyParseRules;
- (void)setChangedBy:;
- (id)init;
- (void).cxx_destruct;
@end
