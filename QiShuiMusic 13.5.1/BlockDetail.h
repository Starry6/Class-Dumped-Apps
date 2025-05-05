@interface BlockDetail : IESLivePBBaseMessage
@property (nonatomic) NSInteger liveTab;
@property (nonatomic) q blockStatus;
@property (nonatomic) NSString blockPrompt;
@property (nonatomic) q unBlockTime;
@property (nonatomic) NSString blockSchemaLocale;
@property (nonatomic) NSString autoUnBlockPrompts;
+ (id)descriptor;
@end
