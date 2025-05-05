@interface GPBStruct : GPBMessage
@property (nonatomic) NSMutableDictionary fields;
@property (nonatomic) Q fields_Count;
+ (id)descriptor;
@end
