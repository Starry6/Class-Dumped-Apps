@interface HTSLivePluginInfo : IESLivePBBaseMessage
@property (nonatomic) q pluginId;
@property (nonatomic) NSMutableDictionary itemPotentialValueHint;
@property (nonatomic) Q itemPotentialValueHint_Count;
+ (id)descriptor;
@end
