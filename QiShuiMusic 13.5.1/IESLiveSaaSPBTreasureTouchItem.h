@interface IESLiveSaaSPBTreasureTouchItem : GPBMessage
@property (nonatomic) IESLiveSaaSPBTreasureDetail detail;
@property (nonatomic) BOOL hasDetail;
@property (nonatomic) IESLiveSaaSPBFreqCtrlParams freqCtr;
@property (nonatomic) BOOL hasFreqCtr;
@property (nonatomic) NSInteger priority;
@property (nonatomic) NSMutableDictionary bizExtra;
@property (nonatomic) Q bizExtra_Count;
+ (id)descriptor;
@end
