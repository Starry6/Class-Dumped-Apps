@interface HTSLiveDefaultResult : IESLivePBBaseMessage
@property (nonatomic) NSInteger resultType;
@property (nonatomic) q defaultInt64;
@property (nonatomic) double defaultFloat64;
@property (nonatomic) NSString defaultString;
@property (nonatomic) BOOL defaultBool;
@property (nonatomic) NSMutableDictionary defaultMap;
@property (nonatomic) Q defaultMap_Count;
+ (id)descriptor;
@end
