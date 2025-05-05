@interface IESECInteractionContent : GPBMessage
@property (nonatomic) IESECInteractionContentCheck check;
@property (nonatomic) BOOL hasCheck;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSInteger loopCount;
@property (nonatomic) NSMutableArray contentArray;
@property (nonatomic) Q contentArray_Count;
@property (nonatomic) NSMutableDictionary eventParam;
@property (nonatomic) Q eventParam_Count;
+ (id)descriptor;
@end
