@interface TRIPBMessageOptions : TRIPBMessage
@property (nonatomic) BOOL messageSetWireFormat;
@property (nonatomic) BOOL hasMessageSetWireFormat;
@property (nonatomic) BOOL noStandardDescriptorAccessor;
@property (nonatomic) BOOL hasNoStandardDescriptorAccessor;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL mapEntry;
@property (nonatomic) BOOL hasMapEntry;
@property (nonatomic) NSMutableArray uninterpretedOptionArray;
@property (nonatomic) Q uninterpretedOptionArray_Count;
+ (id)descriptor;
@end
