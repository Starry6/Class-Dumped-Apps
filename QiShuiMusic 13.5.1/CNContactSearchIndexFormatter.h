@interface CNContactSearchIndexFormatter : NSFormatter
- (id)stringForObjectValue:;
- (BOOL)getObjectValue:forString:errorDescription:;
- (id)stringFromContact:;
- (id)auxiliaryIndexStringForContact:;
- (id)nameExpansionsForContact:;
@end
