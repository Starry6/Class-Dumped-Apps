@interface CalDAVCalendarServerAllowedSharingModesItem : CoreDAVItem
@property (nonatomic) CoreDAVItemWithNoChildren canBePublished;
@property (nonatomic) CoreDAVItemWithNoChildren canBeShared;
@property (nonatomic) CoreDAVItemWithNoChildren isMarkedUndeletable;
@property (nonatomic) CoreDAVItemWithNoChildren isMarkedImmutableSharees;
- (id)copyParseRules;
- (id)init;
- (id)canBeShared;
- (void)setCanBePublished:;
- (void)setIsMarkedUndeletable:;
- (id)isMarkedUndeletable;
- (id)canBePublished;
- (void)setIsMarkedImmutableSharees:;
- (void)setCanBeShared:;
- (void).cxx_destruct;
- (id)isMarkedImmutableSharees;
@end
