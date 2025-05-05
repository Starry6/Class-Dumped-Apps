@interface CNVCardActivityAlertQuotingSerializationStrategy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)regex;
+ (id)serializeString:;
+ (BOOL)strategyWouldAlterString:;
@end
