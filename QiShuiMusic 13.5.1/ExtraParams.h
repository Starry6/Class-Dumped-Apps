@interface ExtraParams : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary predictDict;
@property (nonatomic) Q predictDict_Count;
+ (id)descriptor;
@end
