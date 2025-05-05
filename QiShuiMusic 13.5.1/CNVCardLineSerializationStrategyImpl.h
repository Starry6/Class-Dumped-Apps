@interface CNVCardLineSerializationStrategyImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithStorage:;
- (void)serializeString:;
- (void).cxx_destruct;
- (unsigned long long)estimatedDataLength;
- (void)serializeData:;
- (void)serializeParameters:;
- (void)serializeLine:;
- (void)serializeOpaqueValue:;
- (void)serializeVersionPlaceholder;
- (BOOL)canSerializeString:;
- (BOOL)canSerializeArray:;
- (BOOL)canSerializeData:;
- (void)serializeArray:withItemSeparator:;
- (id)insertionMarker;
- (void)insertLine:atMarker:;
- (void)willSerializeValue;
- (void)serializeGroupingName:;
- (void)serializeName:;
- (void)serializeGroupedLines:withGroupingName:;
+ (id)serializerWithStorage:;
@end
