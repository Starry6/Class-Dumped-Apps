@interface ComponentSkin : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary vertical;
@property (nonatomic) Q vertical_Count;
@property (nonatomic) NSMutableDictionary landscape;
@property (nonatomic) Q landscape_Count;
@property (nonatomic) NSMutableDictionary general;
@property (nonatomic) Q general_Count;
+ (id)descriptor;
@end
