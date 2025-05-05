@interface EDMessageCompoundPredicateParser : EDMessagePredicateParser
- (id)parseResultsFromPredicate:;
- (id)parseMixedSubpredicateResults:predicate:;
- (unsigned long long)resultQueryType:;
@end
