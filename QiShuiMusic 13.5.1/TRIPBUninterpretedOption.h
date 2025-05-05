@interface TRIPBUninterpretedOption : TRIPBMessage
@property (nonatomic) NSMutableArray nameArray;
@property (nonatomic) Q nameArray_Count;
@property (nonatomic) NSString identifierValue;
@property (nonatomic) BOOL hasIdentifierValue;
@property (nonatomic) Q positiveIntValue;
@property (nonatomic) BOOL hasPositiveIntValue;
@property (nonatomic) q negativeIntValue;
@property (nonatomic) BOOL hasNegativeIntValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) NSData stringValue;
@property (nonatomic) BOOL hasStringValue;
@property (nonatomic) NSString aggregateValue;
@property (nonatomic) BOOL hasAggregateValue;
+ (id)descriptor;
@end
