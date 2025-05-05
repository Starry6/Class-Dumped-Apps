@interface CalDAVCalendarServerCollectionUpdatesElement : CalDAVCalendarServerResourceChangeElement
@property (nonatomic) NSInteger state;
- (id)copyParseRules;
- (void)setUnpublish:;
- (void)setPublish:;
- (int)state;
@end
