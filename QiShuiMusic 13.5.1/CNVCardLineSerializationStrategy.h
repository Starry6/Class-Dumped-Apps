@interface CNVCardLineSerializationStrategy : NSObject
+ (id)version30StrategyWithStringStorage:;
+ (id)version21StrategyWithStringStorage:encodings:;
+ (id)version30StrategyWithDataStorage:;
+ (id)version21StrategyWithDataStorage:encodings:;
@end
