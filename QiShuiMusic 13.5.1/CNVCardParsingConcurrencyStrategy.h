@interface CNVCardParsingConcurrencyStrategy : NSObject
+ (id)strategyForOptions:;
+ (BOOL)shouldTryConcurrentParsingForOptions:;
@end
